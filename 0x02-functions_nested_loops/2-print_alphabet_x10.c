#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10()
{
	char c;
	int i;
	while (i < 11)
	{
		_putchar('\n');
		i++;
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
}