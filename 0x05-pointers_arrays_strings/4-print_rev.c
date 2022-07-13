#include <stdio.h>

/**
 *print_rev - a function that prints a string, in reverse,
 *@s: the inputed string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		putchar(s[--len]);
	putchar('\n');
}
