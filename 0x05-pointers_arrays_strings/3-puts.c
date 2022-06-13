#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: input string
 * Return: nothing
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
