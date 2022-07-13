#include <stdio.h>

/**
 *_strlen - ounting strings
 *@s: inputed string
 *Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
