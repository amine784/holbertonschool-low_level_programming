#include "holberton.h"
/**
* print_number - func print int
*
* @n: int type
* Return: integer value
**/
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);
_putchar((num % 10) + '0');
}
