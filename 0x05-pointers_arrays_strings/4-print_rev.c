#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 * @s : input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = 0, a, b;
	char *d, revs;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	d = s;

	for (a = 0; a < (c - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			revs = *(d + b);
			*(d + b) = *(d + (b-1));
			*(d + (b - 1)) = revs;
		}
	}
}
