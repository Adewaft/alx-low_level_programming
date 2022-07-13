#include <stdio.h>

/**
 *rev_string - a function that reverse a string
 *@s: an input string
 *Return: Nothing (suceed)
 */
void rev_string(char *s)
{
	int len = 0, a = 0;
	char r;

	while (s[len] != '\0')
		len++;
	while (a < len--)
	{
		r = s[a];
		s[a++] = s[len];
		s[len] = r;
	}
}
