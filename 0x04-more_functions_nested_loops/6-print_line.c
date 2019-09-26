#include "holberton.h"
/**
 * print_line -n is the number of char.
 *
 * Return 0.
 */
void print_line(void)
{
int c;
c = 0;
while (c < n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
