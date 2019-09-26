#include "holberton.h"
/**
 * print_line -n is the number of char.
 *@n:int type
 * Return 0.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
if (n > 0)
_putchar('_');
_putchar('\n');
}
