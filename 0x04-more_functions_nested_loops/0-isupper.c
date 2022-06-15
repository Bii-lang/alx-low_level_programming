#include "main.h"

/**
 * _isupper - function that checks for uppercase letter
 * @c: character input
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char upp = 'A';
	int i = 0;

	for (; upp <= 'Z'; upp++)
	{
		if (c == uppercase)
		{
			i = 1;
			break;
		}
	}
	return (i);
}
