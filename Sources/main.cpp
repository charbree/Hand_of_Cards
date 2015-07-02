#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rectangle.h"
#include "card.h"

using namespace std;

int main()
{
   srand(time(NULL));
   cout << endl;
    
    //Loop to create five random cards
    for (int i = 0; i < 5; i++) {
        card card1; //Declaration of card object
        card1.random();
        card1.value_display();
        card1.suit_display();
        card1.display();

    }


    return 0;
}
