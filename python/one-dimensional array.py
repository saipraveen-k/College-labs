import pandas as pd
import numpy as np

# ------------------------------
# Create a Pandas Series from a list of data
# ------------------------------
data_list = pd.Series([10, 20, 30, 40, 50])

# Display the Series
print("Pandas Series created from a list:")
print(data_list)

# ------------------------------
# Convert the Series to a Python list
# ------------------------------
data_list = data_list.tolist()

# Display the converted list
print("\nConverted to Python list:")
print(data_list)

# Display the type of the new object
print("Type of the converted object:", type(data_list))