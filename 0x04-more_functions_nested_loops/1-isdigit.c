#include "main.h"

/**
 * _isdigit - checks for a digit between 0 to 9
 * @c: integer input
 * Return: 1 if  c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char a = '0';
	int number = 0;

	for (; a <= '9'; a++)
	{
		if (a == c)
		{
			number = 1;
			break;
		}
	}
	return (number);
}
