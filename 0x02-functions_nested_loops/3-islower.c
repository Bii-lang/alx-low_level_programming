#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c:Input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase
 * Return: 1 if its lowercase or 0 if its uppercase
 */
int _islower(int c)
{
	char a;
	int low = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			low = 1;
	}
	return (low);
}
