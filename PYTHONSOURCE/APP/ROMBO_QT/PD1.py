

import rospy
import argparse

import baxter_interface
from math import sqrt,sin,cos
import numpy as np
import time
import random
import pdb
import os
from baxter_core_msgs.msg import JointCommand
from baxter_pykdl import baxter_kinematics


rospy.init_node('baxter_kinematics')
#Ponemos RATE de mensaje
rate = rospy.Rate(500) #10000 104 es la primera que funciona bien - Seria 0.1 ms o 10kHz 
#Creamos objeto PUBLICADOR
pub = rospy.Publisher('/robot/limb/left/joint_command',JointCommand,queue_size=10)
limb = baxter_interface.Limb('left')

min_KP = 0
max_KP = 100
min_KD = 0.01
max_KD = 1
min_KI = 1
max_KI = 10


def individual():
    #Crea individuo
    a = [random.uniform(min_KP, max_KP) for i in [0,1,2,3,4,5,6]]
    b = [random.uniform(min_KD,max_KD) for i in [7,8,9,10,11,12,13]]
    c = [random.uniform(min_KI,max_KI) for i in [14,15,16,17,18,19,20]] 
    return a + b + c;

def crearPoblacion():
    #Crea una poblacion
    return [individual() for i in range(num)]

def selection_and_reproduction(gen,population,q_d):
    #   Puntua todos los elementos de la poblacion (population) y se queda con los mejores
    #    guardandolos dentro de 'selected'.
    #    Despues mezcla el material genetico de los elegidos para crear nuevos individuos y
    #    llenar la poblacion (guardando tambien una copia de los individuos seleccionados sin
    #    modificar).
  
    #    Por ultimo muta a los individuos.
    n = len(population)-pressure
    puntuados = [];
  
    if gen == 0:
      for i in population:
       print(len(puntuados))
       puntuados.append((calcularFitness(i,q_d),i))
       #Calcula el fitness de cada individuo, y lo guarda en pares ordenados de la forma (5 , [1,2,1,1,4,1,8,9,4,1])
    else:
     error_ant = np.load(os.path.join('VERTICAL','error'+str(gen-1) + '.npy'));
     gen_ant = np.load(os.path.join('VERTICAL','generacion'+str(gen-1) + '.npy'));

     for i in population[:n]:
      print(len(puntuados))
      puntuados.append((calcularFitness(i,q_d),i))


     for i in range(pressure):
      e = error_ant[len(population)-i-1];
      g = gen_ant[len(population)-i-1];
      puntuados.append((e,g))

    error = np.array([i[0] for i in sorted(puntuados)[::-1]]);
    np.save(os.path.join('VERTICAL','error' + str(gen)+'.npy'),error);

#    pdb.set_trace()
    puntuados = [j[1] for j in sorted(puntuados)[::-1]] ;#Ordena los pares ordenados y se queda solo con el array de valores
    population = puntuados;
  
    np.save(os.path.join('VERTICAL','generacion'+str(gen)),np.array(population));
#    pdb.set_trace()
    
  
    selected =  puntuados[n:] ;#Esta linea selecciona los 'n' individuos del final, donde n viene dado por 'pressure'
  
  
  
    #Se mezcla el material genetico para crear nuevos individuos
    for i in range(n):
        punto = random.randint(1,largo-1) #Se elige un punto para hacer el intercambio
        padre = random.sample(selected, 2) #Se eligen dos padres
          
        population[i][:punto] = padre[0][:punto] #Se mezcla el material genetico de los padres en cada nuevo individuo
        population[i][punto:] = padre[1][punto:]
  
    return population #El array 'population' tiene ahora una nueva poblacion de individuos, que se devuelven

def mutation(population):
    
    #    Se mutan los individuos al azar. Sin la mutacion de nuevos genes nunca podria
    #    alcanzarse la solucion.
    
    for i in range(len(population)-pressure):
        if random.random() <= mutation_chance: #Cada individuo de la poblacion (menos los padres) tienen una probabilidad de mutar
            n_mutaciones = random.randint(1,5)
            for j in range(n_mutaciones):
             punto = random.randint(0,largo-1) #Se elgie un punto al azar
             if punto > 6 and punto < 14:
              nuevo_valor = random.uniform(min_KD,max_KD)
             else:
              nuevo_valor = random.uniform(min_KP,max_KP)
             #Es importante mirar que el nuevo valor no sea igual al viejo
             while nuevo_valor == population[i][punto]:
              if punto > 6 and punto < 14:
               nuevo_valor = random.uniform(min_KD,max_KD)
              else:
               nuevo_valor = random.uniform(min_KP,max_KP)
  
              #Se aplica la mutacion
             population[i][punto] = nuevo_valor
  
    #print(population);
    return population


def fifth( buffer,h ):
 haux = 5.0*h;
 m = haux/288.0;
 return m * (19.0*buffer[len(buffer)-6] + 75.0*buffer[len(buffer)-5] + 50.0*buffer[len(buffer)-4] + 50.0*buffer[len(buffer)-3] + 75.0*buffer[len(buffer)-2] + 19.0*buffer[len(buffer)-1]);


def sixth( buffer,h ):
 haux = 6.0*h;
 m = haux/840.0;
 return m * (41.0*buffer[len(buffer)-7] + 216.0*buffer[len(buffer)-6] + 27.0*buffer[len(buffer)-5] + 272.0*buffer[len(buffer)-4] + 27.0*buffer[len(buffer)-3] + 216.0*buffer[len(buffer)-2] + 41.0*buffer[len(buffer)-1]);


def boolerule( buffer,h ):

 haux = 4.0*h;
 m = haux/90.0;
 return m * (7.0*buffer[len(buffer)-5] + 32.0*buffer[len(buffer)-4] + 12.0*buffer[len(buffer)-3] + 32.0*buffer[len(buffer)-2] + 7.0*buffer[len(buffer)-1]);



def simp3_8( buffer,h ):
 haux = 3.0*h;
 m = haux/8.0;
 return m * (buffer[len(buffer)-4] + 3.0*buffer[len(buffer)-3] + 3.0*buffer[len(buffer)-2]+ buffer[len(buffer)-1]);


def simp( buffer, h ):
 haux = 2.0 * h;
 m = haux/6.0;
 return m * (buffer[len(buffer)-3] + 4.0*buffer[len(buffer)-2] + buffer[len(buffer)-1]);

def trap(buffers,h):

 suma = 0.5 * (buffers[len(buffers)-2] + buffers[len(buffers)-1]);

 integral = h*suma;

 return integral

def integra(buffer,h):

 n = len(buffer);

 if n == 1:
  return [0,0,0,0,0,0,0]
 elif n == 2:
  return trap(buffer,h);
 elif n == 3:
  return simp(buffer,h);
 elif n == 4:
  return simp3_8(buffer,h);
 elif n == 5:
  return boolerule(buffer,h);
 elif n == 6:
  return fifth(buffer,h);
 else:
  return sixth(buffer,h);

def generaTrayectoria(n,puntos):

   qObjs = [];
   numero_puntos = len(puntos);

   for i in range(numero_puntos-1):
    qDes = puntos[i];
    qDes_siguiente = puntos[i+1];

    dif = qDes_siguiente - qDes;
    qObjs.append(qDes);
    j = 0;
    while j < n/numero_puntos:
     ultQ = qObjs[len(qObjs)-1];
     qObjs.append(ultQ + ((dif*1.0)/(n*1.0))*numero_puntos)
     j =  j + 1;
   
 
   dif = puntos[0] - puntos[len(puntos)-1];
   qObjs.append(puntos[len(puntos)-1]);
   j = 0;
   while j < n/numero_puntos:
    ultQ = qObjs[len(qObjs)-1];
    qObjs.append(ultQ + ((dif*1.0)/(n*1.0))*numero_puntos)
    j =  j + 1;
   
   return qObjs;

def generaRombo(n,limb):
 
    qObjs = [];

    m = {'left_w0': 0.0,'left_w1': 0.0, 'left_w2': 0.0,'left_e0': 0.0,'left_e1': 0.0,'left_s0': -1.0, 'left_s1':0.0}
    limb.move_to_joint_positions(m)

    qDes1 = np.array([-1.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes2 = np.array([-0.5,-0.5,0.0,0.0,0.0,0.0,0.0]);
    qDes3 = np.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes4 = np.array([-0.5,0.5,0.0,0.0,0.0,0.0,0.0]);

    qDes5 = np.array([-1.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes6 = np.array([-0.25,-0.5,0.0,0.0,0.0,0.0,0.0]);
    qDes7 = np.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes8 = np.array([-0.25,0.5,0.0,0.0,0.0,0.0,0.0]);


    puntos = [];
    puntos.append(qDes1); puntos.append(qDes2); puntos.append(qDes3); puntos.append(qDes4);

    return generaTrayectoria(n,puntos);

def generaMovimientoVertical(n,limb):

    qObjs = [];

    m = {'left_w0': 0.0,'left_w1': 0.0, 'left_w2': 0.0,'left_e0': 0.0,'left_e1': 0.0,'left_s0': -0.5, 'left_s1':0.0}
    limb.move_to_joint_positions(m)

    qDes1 = np.array([-0.5,0.5,0.0,0.0,0.0,0.0,0.0]);
    qDes2 = np.array([-0.5,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes3 = np.array([-0.5,-0.5,0.0,0.0,0.0,0.0,0.0]);

    puntos = [];
    puntos.append(qDes1); puntos.append(qDes2);puntos.append(qDes3);

    return generaTrayectoria(n,puntos);

def generaMovimientoHorizontal(n,limb):

    qObjs = [];

    m = {'left_w0': 0.0,'left_w1': 0.0, 'left_w2': 0.0,'left_e0': 0.0,'left_e1': 0.0,'left_s0': -1.0, 'left_s1':0.0}
    limb.move_to_joint_positions(m)

    qDes1 = np.array([-1.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes2 = np.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes3 = np.array([-1.0,0.0,0.0,0.0,0.0,0.0,0.0]);
    qDes4 = np.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0]);

    puntos = [];
    puntos.append(qDes1); puntos.append(qDes2);#puntos.append(qDes3); puntos.append(qDes4);

    return generaTrayectoria(n,puntos);

def applyFext(kinematics,Fext):

   f_ext = np.array(Fext)

   tau_externa = kinematics.jacobian_transpose()*f_ext

   tau_externa = np.array(tau_externa.reshape((1,7))).flatten()

   return tau_externa

def distanciaEuclidea(v1,v2):
 
 suma = 0;
 for i in range(len(v1)):
   suma = suma + (v2[i]-v1[i])**2
 return np.sqrt(suma);

def calcularFitness(individual,qObjs):

    fitness = 0;

    KP = np.array(individual[0:7])
    KD = np.array(individual[7:14])
    KI = np.array(individual[14:21])

    m = {'left_w0': 0.0,'left_w1': 0.0, 'left_w2': 0.0,'left_e0': 0.0,'left_e1': 0.0,'left_s0': -1.0, 'left_s1':0.0}
    limb.move_to_joint_positions(m)

    #Creamos MENSAJE
    msg = JointCommand()
    #Modo - 1 (CONTROL POR POSICION)
    msg.mode = 3
    msg.names = ['left_s0','left_s1','left_e0','left_e1','left_w0','left_w1','left_w2']

    errores = []
    errores2 = []
    dt = [] 

    t = 0;
    i = 0;

    q_sensores = [];

    kinematics = baxter_kinematics('left')

    while i < len(qObjs):

        dt.append(time.clock())

        qDes = qObjs[i];
     
        

        angles = limb.joint_angles()
        q = np.array([angles['left_s0'],angles['left_s1'],angles['left_e0'],angles['left_e1'],angles['left_w0'],angles['left_w1'],angles['left_w2']])

        q_sensores.append(q);

        error = np.array(qDes-q)
        errores.append(error)

        if i != 0:
          der = (errores[len(errores)-1] - errores[len(errores)-2]) / (dt[len(dt)-2] - dt[len(dt)-1])
          torque = KP*error + KD*np.array(der) 
        else:
          der = errores[len(errores)-1]
          torque = KP*error + KD*np.array(der)
     
        m = {'left_w0': torque[4], 'left_w1': torque[5], 'left_w2': torque[6], 'left_e0': torque[2], 'left_e1': torque[3], 'left_s0': torque[0], 'left_s1': torque[1]}
        msg.command = [torque[0],torque[1],torque[2],torque[3],torque[4],torque[5],torque[6]]
        pub.publish(msg) #Publicamos el mensaje
        rate.sleep() #Esperamos para conseguir el rate deseado
        #limb.set_joint_torques(m)

        for l in range(len(error)):
          fitness = fitness + error[l]*error[l];

        i = i + 10;
 


    print(fitness);
    return fitness;



if __name__ == "__main__":

   largo = 21; #La longitud del material genetico de cada individuo
   num = 10; #La cantidad de individuos que habra en la poblacion
   pressure = 3; #Cuantos individuos se seleccionan para reproduccion. Necesariamente mayor que 2
   mutation_chance = 0.5; #La probabilidad de que un individuo mute
   numero_generaciones = 1000;
   
   n = 300000
   qObjs = generaRombo(n,limb)

   population = np.load(os.path.join('VERTICAL','generacion600.npy'));
   calcularFitness(population[1],qObjs);























