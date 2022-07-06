#include "main.h"

/**
 *
 *print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 *
 *Return: x10 a-z
 *
 */

void print_alphabet_x10(void)
{
	int a ; alpha;
	alpha = 0;
	while (alpha < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar (a);
		}
		alpha++;
		_putchar ("\n");
	}
}
