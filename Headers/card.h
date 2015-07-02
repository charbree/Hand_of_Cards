#ifndef card_H
#define card_H

class card {
  /*
   * Purpose:
   *    The card class stores information about cards,
   *    passes the data to the rectangle class.
   */

 private:
   int height, width;
   char value, suit;
   rectangle card_rectangle;


 public:
   card();
  /*
   * Description:
   *   Default constructor - Sets the width, height, value, and suit of the
   *                         new card to 4, 7, 2, and suit character to: 'H'.
   *
   * Inputs:
   *   None
   *
   * Return:
   *   None
   */

   void set(char new_value, char new_suit);
   /*
    * Description:
    *   Sets the current value and suit of the card.
    *
    * Inputs:
    *   new_value
    *     The new value of the card.
    *
    *   new_suit
    *     The new suit of the card (used when printing).
    *
    * Return:
    *   None
    */

    void suit_display();
    /*
    * Purpose:
    *   Prints the card suit to the terminal.
    *
    * Notes:
    *   The suit is printed by comparing the first letter of the suit
    *   to the corresponding suit name.
    */


    void value_display();
    /*
     * Purpose:
     *   Prints the card value to the terminal.
     *
     * Notes:
     *   The value is printed by comparing the numeric value to
     *   the written value.
     */


    void display();
    /*
     * Purpose:
     *   Draws the card to the terminal.
     *
     * Notes:
     *   The card_rectangle is printed on height rows and width*2 columns wide
     *   (width is adjusted to accommodate for console fonts).  The char
     *   data member "suit" is used to fill in the rectangle.
     */


    void random ();
    /*
     * Purpose:
     *   Assigns a random value and suit to the card.
     *
     * Notes:
     *   Assigns an int 1-13 for the value then
     *   assigns an int value 1-4 for the suit.
     *
     */



};

#endif // card_H

