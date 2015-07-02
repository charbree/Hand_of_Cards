#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {
  /*
   * Purpose:
   *    The Rectangle class stores information about rectangles, and performs
   *    common geometric calculations about the rectangles.
   */

 private:
   int height, width;
   char fill;
   char fill2;


 public:
   rectangle();
  /*
   * Description:
   *   Default constructor - Sets the width and height of the new rectangle to 1 and
   *                         fill character to a single space: ' '.
   *
   * Inputs:
   *   None
   *
   * Return:
   *   None
   */


  void set(int new_width, int new_height, char new_fill, char new_fill2);
  /*
   * Description:
   *   Sets the current width and height of the rectangle.
   *
   * Inputs:
   *   new_width
   *     The new width of the rectangle.
   *
   *   new_height
   *     The height of the rectangle.
   *
   *   new_fill
   *     The fill character of the rectangle (used when printing).
   * Return:
   *   None
   */



  void print();
  /*
   * Purpose:
   *   Draws the rectangle to the terminal.
   *
   * Notes:
   *   The rectangle is printed on height rows and width*2 columns wide
   *   (width is adjusted to accommodate for console fonts).  The char
   *   data member "fill" is used to fill in the rectangle.
   */
};

#endif // RECTANGLE_H
