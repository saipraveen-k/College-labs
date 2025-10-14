import matplotlib.pyplot as plt 
import numpy as np 
import pandas as pd 
 
# Sample data 
data = {'Category': ['A', 'B', 'C', 'D'], 
        'Value1': [10, 25, 15, 30],         
        'Value2': [15, 20, 25, 10]} 
df = pd.DataFrame(data) 
x_scatter = np.random.rand(50) 
y_scatter = np.random.rand(50) 
x_line = np.arange(10) 
y_line = np.random.randint(1, 10, size=10) 
fig, axes = plt.subplots(2, 2, figsize=(10, 8)) 
 
# Scatter Plot 
axes[0, 0].scatter(x_scatter, y_scatter) 
axes[0, 0].set_title('Scatter Plot') 
axes[0, 0].set_xlabel('X-axis') 
axes[0, 0].set_ylabel('Y-axis') 
 
# Line Plot 
axes[0, 1].plot(x_line, y_line, marker='o') 
axes[0, 1].set_title('Line Plot') 
axes[0, 1].set_xlabel('X-axis') 
axes[0, 1].set_ylabel('Y-axis') 
 
# Bar Chart 
axes[1, 0].bar(df['Category'], df['Value1']) 
axes[1, 0].set_title('Bar Chart') 
axes[1, 0].set_xlabel('Category') 
axes[1, 0].set_ylabel('Value1') 
 
# This subplot is intentionally left empty to match the assignment's implied 2x2 grid 
axes[1, 1].set_visible(False)  
plt.tight_layout() 
plt.show() 