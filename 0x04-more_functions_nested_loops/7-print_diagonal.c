#include "holberton.h"
/**
 * print_diagonal - diagonal line on the terminal.
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0 ;  i < n ; i++)
{
for (j = 0; j < i ; j++)
{
_putchar(32);
}
_putchar('\\');
_putchar('\n');
}
}
