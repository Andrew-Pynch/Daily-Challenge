# Lists Comprehensions
# [expr for val in collection]

# List of squares
squares = []
for i in range(1, 101):
    squares.append(i**2)
print(squares)


squares2 = [i**2 for i in range(1, 101)]
print(squares2)

# More complex lists Comprehensions
remainders5 = [x**2 % 5 for x in range(1, 101)]
print(remainders5)

# Scalar multiplication with list Comprehensions
v = [2, -3, 1]
# Incorrect method (for example)
print(4*v)
# 4*v = v + v + v + v 
# ^ Adding lists = concatenation
w = [4*x for x in v]
print(w)


# Cartesian Product
# If A & B are sets, the Cartesian product is the set of pairs (a, b) where 'a' is in A and 'b' is in B.
# AXB = {(a, b) | a ELEMENT A, b ELEMENT B}
# EX : 
# A = {1, 3}
# B = {x, y}
# AXB = {(1, x), (1, y), (3, x), (3, y)}

A = [1, 3, 5, 7]
B = [2, 4, 6, 8]

cartesian_product = [(a, b) for a in A for b in B]
print(cartesian_product)


sentence = "the quick brown fox jumps over the lazy dog"
words = sentence.split()
word_lengths = []

for word in words:
      if word != "the":
          word_lengths.append(len(word))


print(words)
print(word_lengths)

for i in range(len(words):
    print("Word is %s and length of word is %s." % (word, word_lengths[i]))