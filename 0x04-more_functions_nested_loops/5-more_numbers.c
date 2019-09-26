#include "holberton.h"
/**
 * more_numbers - print 10 times  numbers from 0..014.
 */
void more_numbers(void)
{
int i, j, k;
for (i = 0; i <= 10; i++)
{
for (j = 0; j < 14; j++)
{
if (j < 10)
k = j;
else
k = j / 10;
_putchar(k + '0');
if (j > 9)
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
