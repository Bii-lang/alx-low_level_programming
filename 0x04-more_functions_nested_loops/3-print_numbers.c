#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 * followed by a new line
 * Returns: nothing
 */
void print_numbers(void)
{
	int n = '0';

	for (; n <= '9'; n++)
		_putchar(n);
	_putchar('\n');
}
