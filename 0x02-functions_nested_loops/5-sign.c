#include "main.h"

/**
 * print_sign - printsthe sign of the number
 * @n: input number
 * Return: 1 if number is positive,0 if number is 0, or 
 * -1 if number is negative
 */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
