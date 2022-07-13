#include <stdio.h>

/**
*swap_int -  a function that swaps two values
*@a: an inout integer pointer
*@b: an input integer pointer
*Return: Nothin
*/
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
