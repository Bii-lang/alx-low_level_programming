#include <stdio.h>

/**
 * main - prints out single digits of base 10
 * when executed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar("%i", n);
		n++;
	}
	putchar("\n");
	return (0);
}

