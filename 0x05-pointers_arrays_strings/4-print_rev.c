#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 * @s : input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}
	for (c--; c >= 0; c--)
		putchar(s[c]);
	putchar('\n');
}
