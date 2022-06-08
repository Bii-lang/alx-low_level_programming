#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in 10 lines followed by a new line
 */
void print_alphabet_x10(void)
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
