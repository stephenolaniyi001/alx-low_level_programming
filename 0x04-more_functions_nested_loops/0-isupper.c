#include "main.h"

/**
 * _isupper - uppercase letter
 * @c: Char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
