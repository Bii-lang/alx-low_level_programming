#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet in 10 lines followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
