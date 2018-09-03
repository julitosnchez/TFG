import rospy
import argparse

from baxter_pykdl import baxter_kinematics
from baxter_core_msgs.msg import JointCommand
import baxter_interface
import time


def main():
    rospy.init_node('trayectoria_rombo')

    #Definimos el RATE de publicacion de mensajes en ROS
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

    #Leemos los argumentos dados como entrada
    args = parser.parse_args(rospy.myargv()[1:])

    kin = baxter_kinematics(args.limb)
    limb = baxter_interface.Limb(args.limb)
    timeout = args.velocity/10.0

    n_mov = 32
    # Movemos a posicion neutral
    limb.move_to_neutral()
    # Consultamos la posicion actual en formato  (x,y,z) y (i,j,w,k)
    kp = kin.forward_position_kinematics() 

    #Limites del rombo a describir
    limite_inferior_y = -0.5
    limite_inferior_z = -0.5

    proporcionY = limite_inferior_y/n_mov
    proporcionZ = limite_inferior_z/n_mov

    if args.limb == 'right':
     proporcionY = proporcionY*(-1)

    #Creamos MENSAJE
    msg = JointCommand()
    #Modo - 1 (CONTROL POR POSICION)
    msg.mode = 1
    msg.names = [args.limb +'_w0',args.limb + '_w1',args.limb +'_w2',args.limb +'_e0',args.limb +'_e1',args.limb +'_s0',args.limb +'_s1']

    #Vamos describiendo la trayectoria de Rombo
    for i in range(n_mov):
       kp = kin.forward_position_kinematics()
       if i < n_mov//2: 
       	pos = [kp[0],kp[1]+proporcionY,kp[2]-proporcionZ]
       else:
       	pos = [kp[0],kp[1]+proporcionY,kp[2]+proporcionZ]

       rot = [kp[3],kp[4],kp[5],kp[6]]
       theta_i = kin.inverse_kinematics(pos, rot)

       if theta_i != None:
        msg.command = [theta_i[4],theta_i[5],theta_i[6],theta_i[2],theta_i[3],theta_i[0],theta_i[1]]
        pub.publish(msg) #Publicamos el mensaje
        rate.sleep() #Esperamos para conseguir el rate deseado

    for i in range(n_mov):
       kp = kin.forward_position_kinematics()
       if i < n_mov//2: 
       	pos = [kp[0],kp[1]-proporcionY,kp[2]+proporcionZ]
       else:
       	pos = [kp[0],kp[1]-proporcionY,kp[2]-proporcionZ]

       rot = [kp[3],kp[4],kp[5],kp[6]]
       theta_i = kin.inverse_kinematics(pos, rot)

       if theta_i != None:
        msg.command = [theta_i[4],theta_i[5],theta_i[6],theta_i[2],theta_i[3],theta_i[0],theta_i[1]]
        pub.publish(msg)
        rate.sleep()
    

if __name__ == "__main__":
    main()

