#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase 
 * when executed
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	int m;
	char c;
	
	for (m = 0; m < 10; m++)
	{
		putchar(m);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}