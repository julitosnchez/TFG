import numpy as np
import matplotlib.pyplot as plt

# Fixing random state for reproducibility
np.random.seed(19680801)

n_individuos = 3
n_generaciones = 45000
N = 50

x = []
y = [[]]
colors = []

for i in range(n_generaciones):
 error = np.load('error'+str(i)+'.npy') / 12000
 color = np.random.rand(N)
 x.append(i)
 for j in range(n_individuos):
  if j == 0:
  y[j].append(error[len(error)-1-j])



x = np.array(x)
y = np.array(y)

print(len(y))
colors = np.array(colors)
area = 200*np.ones(len(x))  # 0 to 15 point radii

plt.scatter(x, y[0])
#plt.ylim(0.0,0.5)
#plt.xlim(-5,500)

plt.ylabel("Error cometido")
plt.xlabel("Numero de Generacion")
plt.title('Tuneado de parametros PID - AG')

plt.show()
