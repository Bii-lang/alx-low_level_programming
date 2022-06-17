#include "main.h"

/**
 * _isalpha - checks holberton
 * @c: input character
 * Descrption: checks if character is lowercase letter or uppercase
 * Return: 1 if its a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	char low, upp;
	int isLet = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upp = 'A'; upp <= 'Z'; upp++)
		{
			if (c == low || c == upp)
				isLet = 1;
		}
	}
	return (isLet);
}
