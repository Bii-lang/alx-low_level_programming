#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack beur
 * Return: nothing
 */
void jack_bauer(void)
{
	int h, mt;

	for (h = 0; h < 24; h++)
	{
		for (mt = 0; mt < 60; mt++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((mt / 10) + '0');
			_putchar((mt % 10) + '0');
			_putchar('\n');
		}
	}
}
