import control as ct
import numpy as np
from control.matlab import *
import matplotlib.pyplot as plt

#State Space Representation
A=np.array([[1,2],[3,4]])
B=np.array([[1],[1]])
C=np.array([[1,0]])
D=np.array([[0]])
sys1=ct.ss(A,B,C,D)

#Transfer Function representation
num=[1]
den=[1,2,1]
sys2=ct.tf(num,den)

t,y=ct.step_response(sys1)
plt.figure(1)
plt.plot(t,y)
plt.xlabel('Time')
plt.ylabel('Output')
plt.title('Step Response of Sys1')
plt.grid()
plt.show()

t,y=ct.step_response(sys2)
plt.figure(2)
plt.plot(t,y)
plt.xlabel('Time')
plt.ylabel('Output')
plt.title('Step Response of Sys2')
plt.grid()
plt.show()



