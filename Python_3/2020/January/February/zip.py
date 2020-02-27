# combines list elements for each combined element becomes a tuple. 

friends = ['jed', 'zach', 'bob']
enemies = ['paul', 'sam', 'tom']

zipped = zip(friends, enemies)
print(list(zipped))