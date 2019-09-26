#include "holberton.h"
/**
*print_more_numbers - prints numbers 0..14 x10.
*
*
*Return: 0(success.
*/
void print_more_numbers(void)
{
int i, j;
for (j = 0; j <= 10 ; j++)
{
for (i = 0 ; i <= 14 ; i++)
{
if (i / 10 != 0)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar ('\n');
}
return (0);
}
