#include <stdio.h>

/**
 * main - Prints out the alphabet in lowercase
 * when executed followed by  a new line
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
