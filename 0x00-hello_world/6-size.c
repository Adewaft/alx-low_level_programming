#include <stdio.h>

/**
 *main - Entry point
 *   
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;
	long int l;
	long long int d;
	char c;
	float f;
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
