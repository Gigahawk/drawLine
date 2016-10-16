#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "DrawLine.h"

int main()
{
	//defining a window size
	int rows, cols;
	rows = 30;
	cols = 70;
	
	//Initializing a window with the above sizes (don't worry abt the int ** apparently it's too hard for APSC 160)
	int **window = initWindow(rows, cols);

	//Puts lines on the window in the shape of a star using '*'
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

	//deallocates the memory used by the window (good practice but yolo)
	deinitWindow(window, rows);

	system("PAUSE");

	return 0;
}