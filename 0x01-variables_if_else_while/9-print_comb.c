#include <stdio.h>
/**
 * main - prints out numbers in ascending order with commas
 * when executed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	for (a = 0; a < 10; a++)
	{
		putchar(a);
		if ( a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
