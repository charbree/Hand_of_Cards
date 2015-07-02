# Hand_of_Cards
Randomly generated hand of cards

Getting Started
---------------
- Simply run the program and a random hand of cards (5) will be printed out to the terminal.
- Each card's' value and suit will be displayed above the card itself as well in the card itself.
  NOTE: The value of '0' inside the card will represent 10.

How It Works
------------
- The card is created using the functions below:

    * card::random() :          This function will set a random value and suit for the card. The random
                                function will then utilize the card class's set function in order to set
                                the new_value and new_suit of the card.

    * card::set(int 1, int 2) : This function will send the random integer assigned to the value
                                and suit variablea through a set of if statements to return the
                                actual suit and variable to be displayed on the card itself.

    * card::value_display() :   This function will use the integer assigned to the value variable to
                                print out the value of the card.  NOTE: This will be displayed above
                                the card.

    * card::suit_display() :    This function will use the integer assigned to the suit variable to
                                print out the suit of the card.  NOTE: This will be displayed above the
                                card.

    * card::display() :         This function calls to the rectangle class's set and print function. It will
                                will use the card class's default height and width values, then use the card's
                                suit for the rectangle's fill character.  Also, the rectangle class's display print
                                function will be called in order to print the actual card to the terminal.
                                NOTE:  The card class's default height is 7 and the width is 4.

    * rectangle::print() :      This function uses a series of loops to print the borders that will be used to create
                                the card/rectangle.  The rectangle's fill variable will now be the card's suit character.
                                The rectangle's second fill character will now be the card's value character.  The card
                                will be printed out to the terminal.
