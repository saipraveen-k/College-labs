import numpy as np

# ------------------------------
# a. Help on the add() function
# ------------------------------
help(np.add)

# ------------------------------
# b. Test whether none of the elements of a given array is zero
# ------------------------------
arr1 = np.array([1, 2, 3, 4])
print("None of the elements is zero:", np.all(arr1 != 0))

# ------------------------------
# c. Element-wise comparison of two arrays
# ------------------------------
arr2 = np.array([2, 2, 3, 5])

print("Greater:", np.greater(arr1, arr2))
print("Greater Equal:", np.greater_equal(arr1, arr2))
print("Less:", np.less(arr1, arr2))
print("Less Equal:", np.less_equal(arr1, arr2))
print("Equal:", np.equal(arr1, arr2))
print("Equal within tolerance:", np.allclose(arr1, arr2, atol=1))

# ------------------------------
# d. Convert array to list
# ------------------------------
print("Array to list:", arr1.tolist())