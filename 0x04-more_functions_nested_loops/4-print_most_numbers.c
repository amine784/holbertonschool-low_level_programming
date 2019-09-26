#include "holberton.h"
/**
*print_most_numbers - prints numbers 0..9 /2 and 4.
*
*
*Return: 0(success).
*/
void print_numbers(void)
{
int  i;
for (i = 0 ; i < 10 ; i++)
{
if(i==2 ||i==4)
{
i++;
}
_putchar(i + '0');
}
_putchar ('\n');
return (0);
}
