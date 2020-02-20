# Find all of the numbers from 1-1000 that are divisible by 7
divisble_by_7 = [num for num in range(1000) if num % 7 == 0]
print('Numbers divisible by 7:\n %s' % divisble_by_7)


# Find all of the numbers from 1-1000 that have a 3 in them
has_3 = [num for num in range(1000) if '3' in list(str(num))]
print('\nNumbers between 0-1000 that have a 3:\n %s' % has_3)


# Count the number of spaces in a string
sentence = 'Hello there! I am practicing list comprehension syntax!'
spaces = [space for space in list(sentence) if space == ' ']
print("\nTest Sentence: %s.\nNumber of Spaces in test sentence: %s" % (sentence, len(spaces)))


# Remove all of the vowels in a string
sentence = 'Hello there! I am practicing list comprehension syntax!'
vowels = ['a', 'e', 'i', 'o', 'u']
consanents = [letter for letter in sentence if letter not in vowels]
print("\nTest Sentence: %s\nSentence Without Vowels: %s" % (sentence, ''.join(consanents)))


# Find all of the words in a string that are less than 4 letters
sentence = 'Hello there! I am practicing list comprehension syntax!'
small_words = [word for word in sentence.split() if len(word) < 4]
print('\nTest Sentence: %s\nWords with less than 4 chars: %s' % (sentence, small_words))