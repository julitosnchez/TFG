import rospy
import argparse
import time
from time import clock

from baxter_pykdl import baxter_kinematics
import baxter_interface
from math import sqrt,sin,cos


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
        "-v", "--velocity", dest="velocity", default=5.0,
        type=float, help="trajectory velocity"
    )

    parser.add_argument(
        "-r", "--revolution", dest="revolution", default=10.0,
        type=float, help="Revolutions"
    )

    parser.add_argument(
        "-t", "--dt", dest="dt", default=0.025,
        type=float, help="Differential T"
    )

    parser.add_argument(
        "-n", "--points", dest="n", default=100,
        type=int, help="Number of movements"
    )

    args = parser.parse_args(rospy.myargv()[1:])

    kin = baxter_kinematics(args.limb)
    limb = baxter_interface.Limb(args.limb)
    timeout = args.velocity/10.0
    n_mov = args.n
    dt = args.dt
    
    t = 0

    #Movemos a posicion neutral
    limb.move_to_neutral();

    if (args.limb == 'right'):
     angles = limb.joint_angles();
     q = [angles['right_s0'],angles['right_s1'],angles['right_e0'],angles['right_e1'],angles['right_w0'],angles['right_w1'],angles['right_w2']];

     m = {'right_w0': q[4],'right_w1': q[5], 'right_w2': q[6],'right_e0': q[2],'right_e1': q[3],'right_s0': q[0] + 0.5, 'right_s1': q[1]};
     limb.move_to_joint_positions(m)
    
    #Realizamos trayectoria sinusoidal
    contador = 0;
    while(contador < n_mov):
     kp = kin.forward_position_kinematics()

     x = 0.5
     y =  t/100
     z =  0.1*sin(3*t)

     if args.limb == 'right': y = y*(-1);

     pos = [kp[0],kp[1]-y,kp[2]-z]
     rot = [kp[3],kp[4],kp[5],kp[6]]

     l = kin.inverse_kinematics(pos,rot);
     if l != None:
      m = {args.limb +'_w0': l[4], args.limb + '_w1': l[5], args.limb +'_w2': l[6], args.limb +'_e0': l[2], args.limb +'_e1': l[3], args.limb +'_s0': l[0], args.limb +'_s1': l[1]};
      limb.move_to_joint_positions(m,timeout);
     else:
       print(contador)
     t = t + dt
     contador =  contador + 1;


if __name__ == "__main__":
    main()

