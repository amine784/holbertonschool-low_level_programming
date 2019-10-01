#include "holberton.h"
/**
 *puts2-prints others character of string starting with the first.
 *@str:pointer.
 *return always0.
 */
void puts2(char *str)
{
int i = 0;
int length;
while (*(str + i) != '\0')
{
i++;
}
length = i;
for (i = 0 ; i < length ; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
