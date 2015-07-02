#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rectangle.h"
#include "card.h"

using namespace std;

//Card constructor
card::card() {
    //Initial card values.
    width = 4;
    height = 7;
    suit = 'H';
    value = '2';

}

//Card Methods
void card::set(char new_value, char new_suit) {
    //Set new suit values for card data.
    if (new_suit == 1)
        suit = 'H';
    if (new_suit == 2)
        suit = 'S';
    if (new_suit == 3)
        suit = 'D';
    if (new_suit == 4)
        suit = 'C';

    //Set new values for card data.
    if (new_value == 2)
        value = '2';
    if (new_value == 3)
        value = '3';
    if (new_value == 4)
        value = '4';
    if (new_value == 5)
        value = '5';
    if (new_value == 6)
        value = '6';
    if (new_value == 7)
        value = '7';
    if (new_value == 8)
        value = '8';
    if (new_value == 9)
        value = '9';
    if (new_value == 10)
        value = '0';
    if (new_value == 11)
        value = 'J';
    if (new_value == 12)
        value = 'Q';
    if (new_value == 13)
        value = 'K';
    if (new_value == 1)
        value = 'A';


}

void card::display() {
    //Print card using rectangle.
     card_rectangle.set(card::width, card::height, card::suit, card::value);
     card_rectangle.print();

}

void card::suit_display () {
    //Print out corresponding suit name.
    if (suit == 'H')
        cout << "Hearts" << endl;
    if (suit == 'S')
        cout << "Spades" << endl;
    if (suit == 'D')
        cout << "Diamonds" << endl;
    if (suit == 'C')
        cout << "Clubs" << endl;

}

void card::value_display() {
    //Print out phrase that corresponds to card value.
    if (value == '2')
        cout << "Two of ";
    if (value == '3')
        cout << "Three of ";
    if (value == '4')
        cout << "Four of ";
    if (value == '5')
        cout << "Five of ";
    if (value == '6')
        cout << "Six of ";
    if (value == '7')
        cout << "Seven of ";
    if (value == '8')
        cout << "Eight of ";
    if (value == '9')
        cout << "Nine of ";
    if (value == '0')
        cout << "Ten of ";
    if (value == 'J')
        cout << "Jack of ";
    if (value == 'Q')
        cout << "Queen of ";
    if (value == 'K')
        cout << "King of ";
    if (value == 'A')
        cout << "Ace of ";

}


void card::random() {
    //Assign random values to suit and value.
    int random_value = rand() % 13 + 1;
    int random_suit = rand() % 4 + 1;
    card:: set(random_value, random_suit);

}
