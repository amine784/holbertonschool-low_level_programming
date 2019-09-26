#include "holberton.h"
/**
 * print_line -n is the number of char.
 *
 * Return 0.
 */
void print_line(void)
{
int i;
if (n >= 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
return (0);
}
