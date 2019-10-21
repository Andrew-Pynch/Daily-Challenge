new_list = ['once', 'upon', 'a', 'time']

print(list(enumerate(new_list)))

type(enumerate(new_list))

for index, value in enumerate(new_list):
    print("The index number is: " + str(index) + " The value is: " + str(value) + '\n')
