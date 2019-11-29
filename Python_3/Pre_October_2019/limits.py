import math


def function(input_num):
    function_def = int(input_num)**2


def limit_calculation(function, approach_value):
    table_method = []
    val_left = approach_value + 0.00001
    val_right = approach_value - 0.00001

    for i in range(2):
        table_method.append(function(approach_value) - val_left)
        table_method.append(function(approach_value)  + val_right)

    print("A reasonable estimate for the function " + str(function) + " is " + str(table_method))

limit_calculation(function(2), 2)
