input_dominos = ['.', '.', 'R', '.', '.', '.', 'L', '.', '.', 'R']

# Store locations of R dominos and L dominos
location_R = []
location_L = []
print(input_dominos)

# Fill in the locations of the R dominos and L dominos to the location_R and location_L
for i in range(len(input_dominos)):
    if input_dominos[i] == 'R':
        location_R.append(i)
    
    if input_dominos[i] == 'L':
        location_L.append(i)


# Replace values at R index
for i in range(len(location_R) - 1):
    for j in range(len(input_dominos)):
        if j == location_R[i]:
            input_dominos[j + 1] = 'R'



# Replace values at L index
for i in range(len(location_L)):
    for j in range(len(input_dominos)):
        if j == location_L[i]:
            input_dominos[j -1] = 'L'


print(input_dominos)