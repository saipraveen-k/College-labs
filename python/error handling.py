def safe_divide(numerator, denominator): 
    try: 
        result = numerator / denominator         
        print(f"The result of {numerator} / {denominator} is: {result}")     
    except ZeroDivisionError: 
        print(f"Error: Cannot divide by zero! Attempted {numerator} / {denominator}")     
    except TypeError: 
        print("Error: Invalid input types. Please provide numbers.") 
        print("--- Error Handling Demonstration ---") 
safe_divide(10, 2) 
safe_divide(10, 0) 
safe_divide(5, "abc") 