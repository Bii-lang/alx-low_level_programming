#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[];
	int i = 0;
	while (str[i] == '_putchar')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
