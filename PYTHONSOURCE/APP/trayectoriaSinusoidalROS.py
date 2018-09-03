import rospy
import argparse
import time
from time import clock

from baxter_pykdl import baxter_kinematics
from baxter_core_msgs.msg import JointCommand
import baxter_interface
from math import sqrt,sin,cos


def main():
    rospy.init_node('trayectoria_sinusoidal')

    #Ponemos RATE de mensaje
    rate = rospy.Rate(5)

    #Creamos objeto PUBLICADOR
    pub = rospy.Publisher('/robot/limb/left/joint_command',JointCommand,queue_size=10)

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

    #Creamos MENSAJE
    msg = JointCommand()
    #Modo - 1 (CONTROL POR POSICION)
    msg.mode = 1
    msg.names = [args.limb +'_w0',args.limb + '_w1',args.limb +'_w2',args.limb +'_e0',args.limb +'_e1',args.limb +'_s0',args.limb +'_s1']
    
    #Realizamos trayectoria sinusoidal
    contador = 0;
    while(contador < n_mov):
     kp = kin.forward_position_kinematics()

     x = 0.5
     y =  t/100
     z =  0.1*sin(3*t)

     if(args.limb == 'right'): y = y*(-1);

     pos = [kp[0],kp[1]-y,kp[2]-z]
     rot = [kp[3],kp[4],kp[5],kp[6]]

     theta_i = kin.inverse_kinematics(pos,rot);
     if theta_i != None:
      msg.command = [theta_i[4],theta_i[5],theta_i[6],theta_i[2],theta_i[3],theta_i[0],theta_i[1]]
      pub.publish(msg) #Publicamos el mensaje
      rate.sleep() #Esperamos para conseguir el rate deseado
     t = t + dt
     contador =  contador + 1;


if __name__ == "__main__":
    main()

