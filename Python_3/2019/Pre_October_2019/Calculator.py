def Calculator(list_nums):
    first_num = input('Please enter your first number')
    print(first_num)
    
    second_num = input('Please enter your second number')
    print(first_num + ' ? 'second_num)
    
    operation_input = input(str('Please enter the operation you would like to perform'))
    print(first_num + operation + second_num)

    def calculation(first_num, second_num, operation_input):
        if operation_input == '+':
            result = first_num + second_num
        
        elif operation_input == '-':
            result = first_num - second_num
        
        elif operation_input == '/':
            result = furst_num / second_num

        elif operation_input == 'x' or operation_input == '*':
            result = first_num * second_num
    


