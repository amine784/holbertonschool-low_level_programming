#include "holberton.h"
/**
 * print_number - function to print integers
 *
 * @n: int type
 * Return: return integer values
 */

void print_number(int n)
{
	int a, rm, length, c;
	int m = n;
	int pc = 0;
	int pr;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
	}
	for (length = 0; n != 0; length++)
	{
		n /= 10;
	}
	for (pr = 1; pc < (length - 1); pc++)
	{
		pr *= 10;
	}
	for (c = 0; c < length; c++)
	{
		a = m;
		if (m < 0)
			_putchar(((m / pr) * -1) + '0');
		else
			_putchar((m / pr) + '0');
		rm = a % pr;
		pr /= 10;
		m = rm;
	}
}
