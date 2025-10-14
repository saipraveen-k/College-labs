import matplotlib.pyplot as plt 
import numpy as np 
 
# Sample data 
x = np.linspace(0, 2 * np.pi, 100) 
y = np.sin(x) 
y2 = np.cos(x) 
y3 = np.sin(x) * np.cos(x) 
 
# Create a figure with a series of plots 
plt.figure(figsize=(12, 4)) 
plt.subplot(1, 3, 1) 
plt.plot(x, y, color='blue') 
plt.title('Sine Wave') 
plt.xlabel('X-axis') 
plt.ylabel('Y-axis') 
plt.subplot(1, 3, 2) 
plt.plot(x, y2, color='green') 
plt.title('Cosine Wave') 
plt.xlabel('X-axis') 
plt.ylabel('Y-axis') 
plt.subplot(1, 3, 3) 
plt.plot(x, y3, color='red') 
plt.title('Product of Sine and Cosine') 
plt.xlabel('X-axis') 
plt.ylabel('Y-axis') 
plt.tight_layout() 
# Adjusts subplot params for a tight layout 
plt.show() 