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
	int r, t, u;

	for (r = '0'; r < '9'; r++)
	{
		for (t = d + 1; t <= '9'; t++)
		{
			for (u = t + 1; u <= '9'; u++)
				if ((r != t) != u)
				{
					putchar(r);
					putchar(t);
					putchar(u);
					if (r == '7' && t == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
