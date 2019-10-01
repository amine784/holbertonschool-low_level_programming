#include "holberton.h"
/**
*print_rev -print string in inverse followed by new line.
*@s:char type.
*Return: Always0.
*/
void print_rev(char *s)
{
int i;
for (i = 0 ; s[i] != '\0' ; i++)
{
}
i = i - 1;
while (s[i] != '\0')
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
