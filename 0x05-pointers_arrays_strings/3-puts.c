#include "holberton.h"
/**
*_puts- print string followed by new line.
*@str:char type.
*/
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
_putchar(str[i]);
i++;
}
putchar('\n');
}
