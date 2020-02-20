"""Freecell game."""

from cards import *

def cleanup_tableau(tableau):
    del tableau[4][6]
    del tableau[5][6] 
    del tableau[6][6] 
    del tableau[7][6] 
    return tableau


def setup():
    """Create game structures.

    Returns:
        [tuple] -- [a 3-tuple of lists]
    """
    # paramaters: None (deck can be created within this function)
    # returns:
    # - a foundation (list of 4 empty lists)
    # - cell (list of 4 empty lists)
    # - a tableau (a list of 8 lists, the dealt cards)
    foundation = [[], [], [], []]
    cell = [[], [], [], []]
    tableau = [[], [], [], [], [], [], [], []]
    
    # Instantiate an instance of Deck and shuffle the deck
    deck = Deck()
    deck.shuffle()

    while deck.cards_count() > 0:
        for i in tableau:
            i.append(deck.deal())

    cleanup_tableau(tableau)
    return foundation, tableau, cell


def tableau_to_foundation(tableau, foundation, t_col, f_col):
    """[summary]

    Arguments:
        tableau {[type]} -- [description]
        foundation {[type]} -- [description]
        t_col {[type]} -- [description]
        f_col {[type]} -- [description]

    Returns:
        [type] -- [description]
    """
    # parameters: a tableau, a foundation, column of tableau, column of foundation
    # returns: Boolean (True if the move is valid, False otherwise)
    # moves a card at the end of a column of tableau to a column of foundation
    # This function can also be used to move a card from cell to foundation

    # Grab the last card of the selected column
    card = tableau[t_col - 1][-1]

    # Delete the last card of the selected column
    del tableau[t_col - 1][-1]

    # Add that card to the selected location in the foundation
    foundation = foundation[f_col - 1].append(card)

    return tableau, foundation


def tableau_to_cell(tableau, cell, t_col, c_col):
    """[summary]

    Arguments:
        tableau {[type]} -- [description]
        cell {[type]} -- [description]
        t_col {[type]} -- [description]
        c_col {[type]} -- [description]

    Returns:
        [type] -- [description]
    """
    # parameters: a tableau, a cell, column of tableau, column of cell
    # returns: Boolean (True if the move is valid, False otherwise)
    # moves a card at the end of a column of tableau to a cell

    # Grab the last card of the selected column
    card = tableau[t_col - 1][-1]

    # Delete the last card of the selected column
    del tableau[t_col - 1][-1]

    # Add that card to the selected location in the foundation
    cell = cell[c_col - 1].append(card)  

    return tableau, cell


def tableau_to_tableau(foundation, tableau, cell, t_col, tdest_col):
    """[summary]

    Arguments:
        tableau {[type]} -- [description]
        foundation {[type]} -- [description]
        t_col {[type]} -- [description]
        f_col {[type]} -- [description]

    Returns:
        [type] -- [description]
    """
    # parameters: a tableau, a cell, column of tableau, a cell
    # returns: Boolean (True if the move is valid, False otherwise)
    # moves a card in the cell to a column of tableau
    # remember to check validity of move
    if t_col == tdest_col:
        print("INVALID MOVE:\n You cannot move a card into the same column")
        play(foundation, tableau, cell)
    else:
        # Grab the last card of the selected column  
        card = tableau[t_col - 1][-1]

        # Delete the last card of the selected column
        del tableau[t_col - 1][-1]

        # Add that card to the selected location in the foundation
        tableau = tableau[tdest_col - 1].append(card)  

        return tableau

 
def cell_to_tableau(foundation, tableau, cell, c_col, t_col):
    # Grab the last card of the selected column  
    card = cell[c_col - 1][-1]

    # Delete the last card of the selected column
    del cell[c_col - 1][-1]

    # Add that card to the selected location in the foundation
    tableau = tableau[t_col - 1].append(card)  

    return tableau, cell   


def cell_to_foundation(foundation, tableau, cell, c_col, f_col):
    # Grab the last card of the selected column  
    card = cell[c_col - 1][-1]

    # Delete the last card of the selected column
    del cell[c_col - 1][-1]

    # Add that card to the selected location in the foundation
    foundation = foundation[f_col - 1].append(card)  

    return foundation, cell   


def is_winner(foundation):
    """[summary]

    Arguments:
        foundation {[type]} -- [description]

    Returns:
        [type] -- [description]
    """
    # parameters: a foundation
    # return: Boolean
    pass


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
            print("    {:8s}".format(c[0]), end="")
        except IndexError:
            print("{:8s}".format(""), end="")

    print("    ", end="")
    for stack in foundation:
        # print if there is a card there; if not, exception prints spaces.
        try:
            print("    {:8s}".format(stack[-1]), end="")
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


def print_rules():
    """[summary]
    """
    # parameters: none
    # returns: nothing
    # prints the rules
    print("Rules of FreeCell")

    print("Goal")
    print("\tMove all the cards to the Foundations")

    print("Foundation")
    print("\tBuilt up by rank and by suit from Ace to King")

    print("Tableau")
    print("\tBuilt down by rank and by alternating color")
    print("\tThe bottom card of any column may be moved")
    print("\tAn empty spot may be filled with any card ")

    print("Cell")
    print("\tCan only contain 1 card")
    print("\tThe card may be moved")


def show_help():
    """[summary]
    """
    # parameters: none
    # returns: nothing
    # prints the supported commands
    print("Responses are: ")
    print("\t t2f #T #F - move from Tableau to Foundation") # X
    print("\t t2t #T1 #T2 - move card from one Tableau column to another") # X
    print("\t t2c #T #C - move from Tableau to Cell") # X
    print("\t c2t #C #T - move from Cell to Tableau")
    print("\t c2f #C #F - move from Cell to Foundation")
    print("\t 'h' for help")
    print("\t 'q' to quit")


def get_cols(source_name, dest_name):
    source = int(input("Please enter the source column from %s: " % (source_name)))
    dest = int(input("Please enter the destination column from %s: " % (dest_name)))

    return source, dest

def play(foundation, tableau, cell):
    """Main program. Does error checking on the user input."""

    while True:
        # Uncomment this next line. It is commented out because setup doesn't
        # do anything so printing doesn't work.
        print_game(foundation, tableau, cell)
        response = input("Command (type 'h' for help): ")
        response = response.strip()
        response_list = response.split()
        if len(response_list) > 0:
            r = response_list[0]
            if r == "t2f":
                source, dest = get_cols('Tableau', 'Foundation')
                tableau_to_foundation(tableau, foundation, source, dest)
            elif r == "t2t":
                source, dest = get_cols('Tableau', 'Tableau')
                tableau_to_tableau(foundation, tableau, cell, source, dest)
            elif r == "t2c":
                source, dest = get_cols('Tableau', 'Cell')
                tableau_to_cell(tableau, cell, source, dest)
            elif r == "c2t":
                source, dest = get_cols('Cell', 'Tableau')
                cell_to_tableau(foundation, tableau, cell, source, dest)
            elif r == "c2f":
                source, dest = get_cols('Cell', 'Foundation')
                cell_to_foundation(foundation, tableau, cell, source, dest)
            elif r == "q":
                break
            elif r == "h":
                show_help()
            else:
                print("Unknown command:", r)
        else:
            print("Unknown Command:", response)
    print("Thanks for playing")

def start():
    foundation, tableau, cell = setup()
    play(foundation, tableau, cell)
    print_rules()
    show_help()


start()








