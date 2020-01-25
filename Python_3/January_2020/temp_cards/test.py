from cards import *

deck = Deck()
deck.shuffle()

foundation = [[], [], [], []]
cell = [[], [], [], []]
tableau = [[], [], [], [], [], [], [], []]
#tableau = [['h'], ['i'], ['t'], ['h'], ['e'], ['r'], ['e'], ['!']]






def print_game(foundation, tableau, cell):
    """[summary]

    Arguments:
        foundation {[type]} -- [description]
        tableau {[type]} -- [description]
        cell {[type]} -- [description]
    """
    # parameters: a tableau, a foundation and a cell
    # returns: Nothing
    # prints the game, i.e, print all the info user can see.
    # Includes:
    #     a) print tableau
    #     b) print foundation ( can print the top card only)
    #     c) print cells
    print()
    print("                 Cells:                           Foundation:")
    # print cell and foundation labels in one line
    for i in range(4):
        print("{:8d}".format(i + 1), end="")
    print("    ", end="")
    for i in range(4):
        print("{:8d}".format(i + 1), end="")
    print()  # carriage return at the end of the linefoundation

    # print cell and foundation cards in one line; foundation is only top card
    for c in cell:
        # print if there is a card there; if not, exception prints spaces.
        try:
            print("{:8s}".format(c[0]), end="")
        except IndexError:
            print("{:8s}".format(""), end="")

    print("    ", end="")
    for stack in foundation:
        # print if there is a card there; if not, exception prints spaces.
        try:
            print("{:8s}".format(stack[-1]), end="")
        except IndexError:
            print("{:8s}".format(""), end="")

    print()  # carriage return at the end of the line
    print("----------")

    print("\n                                Tableau")
    for i in range(len(tableau)):  # print tableau headers
        print("{:8d}".format(i + 1), end="")
    print('\n')  # carriage return at the end of the line

    # Find the length of the longest stack
    max_length = max([len(stack) for stack in tableau])

    # print tableau stacks row by row
    for i in range(max_length):  # for each row
        print(" " * 7, end="")  # indent each row
        for stack in tableau:
            # print if there is a card there; if not, exception prints spaces.
            try:
                print("{:8s}".format(stack[i]), end="")
            except IndexError:
                print("{:8s}".format(""), end="")
        print()  # carriage return at the end of the line
    print("----------")