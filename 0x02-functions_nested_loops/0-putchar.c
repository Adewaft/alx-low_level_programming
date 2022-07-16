#include "main.h"

/**
 *main - Entry point
 *
 *  
 *
 *Return: Always 0 (Success)
 *
 */
int main(void)
{
	char hon[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(hon); c++)
	{
		_putchar(hon[c]);
	}
_putchar('\n');
return (0);
}
