#include "holberton.h"
/**
 * _isdigits - checks if character is uppercase, return 1 is yes and 0 if not.
 * @c: is char type
 * Return: 1 if c is a digit  and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0  && c <= 9)
		return (1);
	else
		return (0);
}
