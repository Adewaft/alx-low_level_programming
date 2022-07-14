#include "main.h"
/**
 *print_alphabet - a function that prints the alphabetin lowercase
 *
 *Return: 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
