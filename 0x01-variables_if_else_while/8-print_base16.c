#include <stdio.h>
/**
 * main - entry block
 * hexadecimal
 * Return: 0 
**/
int main(void)
{
int x = 0;
for (x = 0; x < 10; x++)
{
putchar(x % 10 + '0');
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
