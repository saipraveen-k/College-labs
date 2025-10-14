def kg_to_pounds():
    try: 
        kilograms = int(input("Enter the weight in kilograms: "))      
        pounds = kilograms * 2.20462     
        print(f"The weight in pounds is: {pounds:.2f}")   
    except ValueError: 
        print("Invalid input. Please enter a numerical value for weight.")  
kg_to_pounds()