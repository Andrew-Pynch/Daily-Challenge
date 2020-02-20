from cards import *

deck = Deck()
deck.shuffle()

foundation = [[], [], [], []]
cell = [[], [], [], []]
tableau = [[], [], [], [], [], [], [], []]
#tableau = [['h'], ['i'], ['t'], ['h'], ['e'], ['r'], ['e'], ['!']]





while deck.cards_count() > 0:
    for i in tableau:
        i.append(deck.deal())




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


    return foundation, tableau, cell