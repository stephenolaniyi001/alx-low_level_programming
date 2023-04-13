#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write the character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and is set apropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
