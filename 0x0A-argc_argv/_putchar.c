#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the character C to stdout
 * @c: Their character to print
 *
 * Return: On success 1.
 * on error, -1 is returned and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
