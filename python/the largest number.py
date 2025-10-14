def get_largest_number(numbers):     
    if not numbers:         
        return None     
    largest = numbers[0]     
    for num in numbers[1:]:         
        if num > largest:             
            largest = num     
            return largest 
my_list = [10, 45, 2, 99, 67, 88] 
largest_number = get_largest_number(my_list) 
print("The largest number is:", largest_number) 