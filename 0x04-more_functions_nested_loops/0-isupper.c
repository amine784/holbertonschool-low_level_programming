#include "holberton.h"
/**
 * _isupper - checks if character is uppercase, return 1 is yes and 0 if not.
 * @c: is char type
 * Return: 1 if c is uppercase  and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
