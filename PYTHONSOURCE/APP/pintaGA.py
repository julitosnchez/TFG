import numpy as np
import matplotlib.pyplot as plt

# Fixing random state for reproducibility
np.random.seed(19680801)

n_individuos = 3
n_generaciones = 500
N = 50

x = []
y = []
colors = []

for i in range(n_generaciones):
 error = np.load('error'+str(i)+'.npy') / 12000
 color = np.random.rand(N)
 for j in range(n_individuos):
  x.append(i)
  y.append(error[len(error)-1-j])
  colors.append(color)



x = np.array(x)
y = np.array(y)
colors = np.array(colors)
area = 200*np.ones(len(x))  # 0 to 15 point radii

plt.scatter(x, y, c=colors, s=area,alpha=0.5)
plt.ylim(0.05,0.25)
plt.xlim(-5,150)

plt.ylabel("Error cometido")
plt.xlabel("Numero de Generacion")
plt.title('Tuneado de parametros PID - AG')

plt.show()
