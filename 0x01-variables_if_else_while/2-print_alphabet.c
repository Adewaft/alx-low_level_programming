#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char lowc;

	for (lowc = 'a'; lowc <= 'z'; lowc++)
		putchar(lowc);
	putchar('\n');
	return (0);
}
