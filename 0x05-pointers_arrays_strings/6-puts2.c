#include <stdio.h>

/**
*puts2 - a function that prints every other character of a strin.
 *@str: An input string
 *Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, a = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;
	for (; a <= len; a += 2)
		_putchar(str[i]);
	_putchar('\n');
}
