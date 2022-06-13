#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input character
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count;
	for (count = 0; count < '\0'; count++)
	{
		if (*(s + count) != '\0')
		{
			return;
		}
	}
	return(count);
}
