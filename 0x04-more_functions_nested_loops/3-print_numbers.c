#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 * followed by a new line
 * Returns: nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar("%d", n);
	_putchar('\n');
}
