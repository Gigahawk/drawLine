#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "DrawLine.h"

int main()
{
	int rows, cols;
	rows = 30;
	cols = 70;
	int **window = initWindow(rows, cols);

	drawLineChar(window, 0, 15, 35, 15, '*');
	drawLineChar(window, 69, 15, 35, 15, '*');
	drawLineChar(window, 35, 29, 35, 15, '*');
	drawLineChar(window, 35, 0, 35, 15, '*');
	drawLineChar(window, 0, 0, 35, 15, '*');
	drawLineChar(window, 0, 29, 35, 15, '*');
	drawLineChar(window, 69, 29, 35, 15, '*');
	drawLineChar(window, 69, 0, 35, 15, '*');


	drawWindow(window, rows, cols);

	deinitWindow(window, rows);

	system("PAUSE");

	return 0;
}