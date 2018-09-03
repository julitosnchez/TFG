import rospy
import argparse

from baxter_pykdl import baxter_kinematics
import baxter_interface
from math import sqrt
import numpy as np


def main():
    rospy.init_node('baxter_kinematics')

    arg_fmt = argparse.ArgumentDefaultsHelpFormatter
    parser = argparse.ArgumentParser(formatter_class=arg_fmt)
    parser.add_argument(
        "-l", "--limb", dest="limb", default="left",
        choices=['left', 'right'],
        help="joint trajectory limb"
    )

    parser.add_argument(
        "-R", "--radius", dest="radius", default=0.2,
        type=float,
        help="trajectory radius"
    )

    parser.add_argument(
        "-v", "--velocity", dest="velocity", default=5.0,
        type=float, help="trajectory velocity"
    )

    parser.add_argument(
        "-r", "--revolution", dest="revolution", default=0.9,
        type=float, help="Revolutions"
    )

    args = parser.parse_args(rospy.myargv()[1:])

    kin = baxter_kinematics(args.limb)
    limb = baxter_interface.Limb(args.limb)
    timeout = args.velocity/10.0
    radio = args.radius

    decremento = 0.01

    posiciones = [];

    centro_y = 0.35
    centro_z = 0.1

    if args.limb == 'right':
     centro_y = centro_y * (-1)

    # FK Position
    limb.move_to_neutral()
    kp = kin.forward_position_kinematics()

    #Array donde vamos acumulando configuraciones q1,q2,...,qn para seguir la trayectoria
    #Util para control por Torques con PID
    posiciones.append(kp);

    #Centro de la Circunferencia
    pos = [kp[0],kp[1]-centro_y,kp[2]+centro_z]
    rot = [kp[3],kp[4],kp[5],kp[6]]

    #Calculamos configuracion Qcentro
    l = kin.inverse_kinematics(pos, rot)
    m = {args.limb +'_w0': l[4], args.limb + '_w1': l[5], args.limb +'_w2': l[6], args.limb +'_e0': l[2], args.limb +'_e1': l[3], args.limb +'_s0': l[0], args.limb +'_s1': l[1]}
    #Movemos al centro de la circunferencia
    limb.move_to_joint_positions(m)

    posiciones.append(l);

    puntos_circunferencia = []
    puntos_circunferencia2 = []
    
    #Calculamos los valores que tomara Z y que nos servira para calcular Y posteriormente
    valoresTomar = []
    i = 1
    while(i >= -0.5):
     valoresTomar.append(i)
     i = i - decremento

    #Calculamos las posiciones para describir circunferencia en plano ZY
    for z in valoresTomar:
     c = 2*pos[1]
     b = (-1)*(-z*z + 2*z*pos[2] + radio*radio - pos[2]*pos[2] - pos[1]*pos[1])
     if c*c - 4*b > 0:
      y = (c + sqrt(c*c - 4*b)) / 2
      y2 = (c - sqrt(c*c - 4*b)) / 2
      puntos_circunferencia.append([y,z])
      puntos_circunferencia2.append([y2,z])
    
    Posiciones = []
    Rotaciones = []
    ErroresPos = []
    ErroresRot = []

    #Vamos PUBLICANDO las posiciones que deseamos alcanzar para seguir la trayectoria
    for p in puntos_circunferencia2:
     kp = kin.forward_position_kinematics()
     pos = [kp[0],p[0],p[1]]
     rot =  [kp[3],kp[4],kp[5],kp[6]]
     l = kin.inverse_kinematics(pos, rot)
     if l != None:
      Posiciones.append(pos)
      Rotaciones.append(rot)
      m = {args.limb +'_w0': l[4], args.limb + '_w1': l[5], args.limb +'_w2': l[6], args.limb +'_e0': l[2], args.limb +'_e1': l[3], args.limb +'_s0': l[0], args.limb +'_s1': l[1]}
      limb.move_to_joint_positions(m)
      ErroresRot.append(rot)
      posiciones.append(l);
     else:
      ErroresPos.append(pos)


    puntos_circunferencia = puntos_circunferencia[::-1]
    for p in puntos_circunferencia:
     kp = kin.forward_position_kinematics()
     pos = [kp[0],p[0],p[1]]
     rot =  [kp[3],kp[4],kp[5],kp[6]]
     l = kin.inverse_kinematics(pos, rot)
     if l != None:
      Posiciones.append(pos)
      Rotaciones.append(rot)
      m = {args.limb +'_w0': l[4], args.limb + '_w1': l[5], args.limb +'_w2': l[6], args.limb +'_e0': l[2], args.limb +'_e1': l[3], args.limb +'_s0': l[0], args.limb +'_s1': l[1]}
      limb.move_to_joint_positions(m)
      posiciones.append(l);
     else:
      ErroresPos.append(pos)
      ErroresRot.append(rot)

    #Caso de que queramos realizar la trayectoria en mas de una ocasion
    n_vueltas = args.revolution
    k = 1
    while k < n_vueltas:
     for i in range(len(Posiciones)):
      pos = Posiciones[i]
      rot = Rotaciones[i]
      l = kin.inverse_kinematics(pos, rot)
      m = {args.limb +'_w0': l[4], args.limb + '_w1': l[5], args.limb +'_w2': l[6], args.limb +'_e0': l[2], args.limb +'_e1': l[3], args.limb +'_s0': l[0], args.limb +'_s1': l[1]}
      limb.move_to_joint_positions(m)
     k = k+1

    np.save('trayectoriaC',np.array(posiciones));

if __name__ == "__main__":
    main()

