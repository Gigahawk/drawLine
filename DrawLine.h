#ifndef DRAWLINE_H
#define DRAWLINE_H


//allocates and initializes a Window to draw into
int ** initWindow(int rows, int cols);

/* deallocates space used for window
* (it's good practice to use this at
* the end of your program but technically
* the OS handles it for you)
*/
void deinitWindow(int** window, int rows);

//places a line between two points with default char '0'
void drawLine(int** window, int xStart, int yStart, int xEnd, int yEnd);

//places a line between two points with specified char
void drawLineChar(int** window, int xStart, int yStart, int xEnd, int yEnd, char character);

//draws the window on screen
void drawWindow(int** array, int rows, int cols);

#endif //DRAWLINE_H