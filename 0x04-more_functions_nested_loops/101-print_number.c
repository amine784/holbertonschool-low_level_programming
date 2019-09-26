#include "holberton.h"
/**
* print_number - prints # using _putchar func
* @n:  integer to print
*
* Return: (void)
*/
void print_number(int n)
{
int cp, rm, size = 1, m = n % 10;
n /= 10;
cp = n;
if (m < 0)
{
m *= -1, cp *= -1, n *= -1;
_putchar('-');
}
if (cp > 0)
{
while (cp / 10 != 0)
{
cp /= 10, size *= 10;
}
while (size > 0)
{
rm = n / size;
_putchar('0' + rm);
n -= rm *size;
size /= 10;
}
}
_putchar('0' + m);
}
