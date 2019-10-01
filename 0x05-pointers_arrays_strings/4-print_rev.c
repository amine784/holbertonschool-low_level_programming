#include "holberton.h"
/**
*print_rev -print string in inverse followed by new line.
*@s:char type.
*Return: Always0.
*/
void print_rev(char *s)
{
int i;
for (i = 1; s[i] != '\0' ; i++)
{
}
while (s[i] != '\0')
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
