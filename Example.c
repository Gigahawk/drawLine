#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "DrawLine.h"

int main()
{
	//Initializing an array to use as a window
	int **window;
	
	// defining a window size 
	int rows, cols;
	rows = 30;
	cols = 70;
	
	//Initializing array to be a window with the above sizes 
	window = initWindow(rows, cols);

	/*Puts lines on the window in the shape of a star using '*'
	 * NOTE: coordinates are zero-indexed
	 * i.e. If I set rows=30; then the first row is 0, then 1, then 2 ... and the last one is 29.
	 * This is why the corner/edge coordinates are row-1 or cols-1.
	*/
	drawLineChar(window, 0, 15, 35, 15, '*');
	drawLineChar(window, 69, 15, 35, 15, '*');
	drawLineChar(window, 35, 29, 35, 15, '*');
	drawLineChar(window, 35, 0, 35, 15, '*');
	drawLineChar(window, 0, 0, 35, 15, '*');
	drawLineChar(window, 0, 29, 35, 15, '*');
	drawLineChar(window, 69, 29, 35, 15, '*');
	drawLineChar(window, 69, 0, 35, 15, '*');

	//Prints out the window
	drawWindow(window, rows, cols);

	//deallocates the memory used by the window
	deinitWindow(window, rows);

	system("PAUSE");

	return 0;
}