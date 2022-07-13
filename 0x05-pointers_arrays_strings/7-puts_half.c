#include <stdio.h>

/**
 * puts_half -to print half of a string
 * @str: the  output string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, a, b;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		b = len / 2;
	else
		b = (len + 1) / 2;
	for (a = b; a < len; a++)
		_putchar(str[a]);
	_putrchar('\n');
}
