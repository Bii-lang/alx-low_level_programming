#include "main.h"

/**
 * swap_int - swaps the values of two integers when executed
 * @a: input integer
 * @b: input integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
