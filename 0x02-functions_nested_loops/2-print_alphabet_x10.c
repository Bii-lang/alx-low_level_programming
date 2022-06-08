#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(int)
{
	char c;

	c ='a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet_x10(10);
	return (0);
}
