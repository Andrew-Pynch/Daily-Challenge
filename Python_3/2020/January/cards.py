#! /usr/bin/env python3.7

"""Define Cards and Deck classes."""

import random  # required for shuffle method of Deck


class Card:
    """
    A card in a French deck.

    Suit and rank are ints, and index into suit_list and rank_list. Value is
    different from rank: for example face cards are equal in value (all 10)
    """

    # Use these lists to map the ints of suit and rank to nice words.
    # The 'x' is a place holder so that index-2 maps to '2', etc.
    suit_list = ["x", "♣", "♦", "♥", "♠"]
    rank_list = ["x", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"]

    def __init__(self, rank=0, suit=0):
        """
        Initialize a Card.

        Rank and suit must be ints. This checks that they are in the correct
        range. Blank card has rank and suit set to 0.
        """
        self.__suit = 0
        self.__rank = 0
        if isinstance(suit, int) and isinstance(rank, int):
            if suit in range(1, 5) and rank in range(1, 15):
                self.__suit = suit
                self.__rank = rank

    def get_rank(self):
        """Return the rank of the Card."""
        return self.__rank

    def get_suit(self):
        """Return the suit of the Card."""
        return self.__suit

    #    These two "set" methods are for testing: turn them on for testing and
    #    and then turn off.  These allow you to change a card's rand and suit
    #    so you can test situations that might occur infrequently.
    #
    #    def set_rank(self, rank):
    #       """Set the rank of the Card for testing purposes."""
    #      self.__rank = rank
    #
    #   def set_suit(self, suit):
    #       """Set the suit of the Card for testing purposes."""
    #       self.__suit = suit

    def get_value(self):
        """
        Get the value of the Card.

        Face cards return 10, the rest return their rank values. Aces are low.
        """
        return self.__rank if self.__rank < 10 else 10

    def equal_suit(self, other):
        """Test if suits are equal."""
        return self.__suit == other.get_suit()

    def equal_rank(self, other):
        """Test if ranks are equal."""
        return self.__rank == other.get_rank()

    def equal_value(self, other):
        """Test if values are equal."""
        return self.get_value() == other.get_value()

    def __str__(self):
        """Return a human-redable representation of the Card."""
        return f"{self.rank_list[self.__rank]}{self.suit_list[self.__suit]}"

    def __repr__(self):
        """Return a machine-readable representation of the Card."""
        return f"cards.Card(rank={self.__rank}, suit={self.__suit})"


class Deck:
    """A French deck.

    A deck of cards, implemented as a list of Card objects. The last card in
    the deck (list) is the top of deck.
    """

    def __init__(self):
        """Initialize a Deck."""
        self.__deck = [Card(rank, suit) for suit in range(1, 5) for rank in range(1, 14)]

    def shuffle(self):
        """Shuffle the Deck."""
        random.shuffle(self.__deck)

    def deal(self):
        """Return the top card from the Deck (if the deck is not empty)."""
        return self.__deck.pop() if len(self.__deck) != 0 else None

    def cards_count(self):
        """Return the number of Cards in the Deck."""
        return len(self.__deck)

    def is_empty(self):
        """Return True if the deck is empty."""
        return len(self.__deck) == 0

    def __str__(self):
        """Return a human-readable representation of the Deck."""
        return ", ".join([str(card) for card in self.__deck])

    def __repr__(self):
        """Return a machine-readable representation of the Deck."""
        return f"cards.Deck()"

    def pretty_print(self, column_max=10):
        """Return a column-oriented printing of a deck."""
        for index, card in enumerate(self.__deck):
            if index % column_max == 0:  # at final column so print a carriage return
                print()
            # Your version which did not work
            # print(f"{card:4s}", end="")
            # Hotfix I applied that we aggreed via email
            print(f"{str(card):4s}", end="")
        print()
        print()
