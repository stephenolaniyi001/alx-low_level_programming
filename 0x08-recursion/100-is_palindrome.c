#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the lenght of a string.
 * @s: The strings to be measured.
 *
 * Return: The lenght of the strings.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
