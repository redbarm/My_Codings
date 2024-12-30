import os
import matplotlib.pyplot as plt   # MATLAB plotting functions
from control.matlab import *  # MATLAB-like functions

# Parameters defining the system
m = 10.0           # system mass /250
k = 0.0            # spring constant /40
b = 0.0            # damping constant /60

# System matrices
A = [[0, 1.], [-k/m, -b/m]]
B = [[0], [1/m]]
C = [[1., 0]]
sys = ss(A, B, C, 0)

# Step response for the system
plt.figure(1)
yout, T = step(sys)
plt.plot(T.T, yout.T)
plt.show(block=False)

# Bode plot for the system
plt.figure(2)
mag, phase, om = bode(sys, logspace(-2, 2), plot=True)
plt.show(block=False)

# Nyquist plot for the system
plt.figure(3)
nyquist(sys)
plt.show(block=False)

# Root lcous plot for the system
rlocus(sys)

if 'PYCONTROL_TEST_EXAMPLES' not in os.environ:
    plt.show()