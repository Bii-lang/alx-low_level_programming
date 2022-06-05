#include <stdio.h>

/**
 * main - Prints out the alphabet in lowecase
 * when c is executed
 * Reurn: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
