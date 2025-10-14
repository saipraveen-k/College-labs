import matplotlib.pyplot as plt 
import numpy as np 
from mpl_toolkits.mplot3d import Axes3D 
 
# Sample 3D data 
np.random.seed(42) 
x = np.random.rand(50) 
y = np.random.rand(50) 
z = np.random.rand(50) 
 
# Create a 3D figure 
fig = plt.figure(figsize=(8, 6)) 
ax = fig.add_subplot(111, projection='3d') 
 
# Plot the 3D data 
ax.scatter(x, y, z) 
 
# Set labels for the axes 
ax.set_xlabel('X-axis') 
ax.set_ylabel('Y-axis') 
ax.set_zlabel('Z-axis') 
ax.set_title('3D Scatter Plot') 