#include <unistd.h>
/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * reset_to_98 - takes a pointer to an int and resets 
 * it to 98
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int n;
	n = 98;
	return;
}
