#include "main.h"

/**
 * main - check the function and code
 * @n - input integer
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
