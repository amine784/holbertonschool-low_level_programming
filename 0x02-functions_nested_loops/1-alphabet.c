#include <stdio.h>
#include "holberton.h"
/**
 * main - main block
 * Print all numbers 0..10.
 * Return: 0
 */
 void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
