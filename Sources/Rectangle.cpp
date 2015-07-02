#include <iostream>
#include "rectangle.h"
#include "card.h"
#include <cstdlib>
#include <ctime>

using namespace std;

rectangle::rectangle() {

    width = 5;
    height = 5;
    fill = ' ';
    fill2 = ' ';

}

void rectangle::set(int new_width, int new_height, char new_fill, char new_fill2) {

    width = new_width;
    height = new_height;
    fill = new_fill;
    fill2 = new_fill2;

}

void rectangle::print() {
    cout << " ";
    //Loop for top border.
    for (int i = 0; i < width * 2; i++)
        cout << "_";
    cout << endl;
    //Insert card vaule into card.
    cout << "|" << fill2;
    //Loop for left and right borders.
    for (int m = 0; m < (width * 2) - 1; m++)
        cout << fill;

    cout << "|" << endl;
    //Loop for left and right borders.
    int j = 0;
    while (j < height-2) {
        cout << "|";

        for (int k = 0; k < (width * 2); k++)
            cout << fill;
            cout << "|" << endl;
            j++;
    }
    cout << "|";
    //Loop for left and right borders.
    for (int m = 0; m < (width * 2) - 1; m++)
        cout << fill;
    //Inster card value into card.
    cout << fill2 << "|" << endl;
    cout << " ";
    //Loop for bottom border.
    for (int l = 0; l < width * 2; l++)
        cout << "-";

    cout << endl;
    cout << endl;

}


