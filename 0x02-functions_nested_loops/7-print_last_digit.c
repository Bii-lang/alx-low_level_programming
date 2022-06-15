#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input integer
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		a = -1 * (i %10);
	else
		n = i % 10;
	_putchar((a % 10) + '0');
	return (a % 10);
}
