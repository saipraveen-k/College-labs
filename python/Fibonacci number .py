def fibonacci(n):     
    if n <= 0: 
        return "Input must be a positive integer"     
    elif n == 1:         
        return 0     
    elif n == 2:         
        return 1 
    else: 
        return fibonacci(n-1) + fibonacci(n-2)
n = 10 
print(f"The {n}th Fibonacci number is: {fibonacci(n)}") 