#include "holberton.h"
/**
 * puts_half - prints second half of string.
 * @str:pointer
 *return Always 0.
 */
void puts_half(char *str)
{
int i = 0;
int half;
int length;
while (*(str + i) != '\0')
{
i++;
}
length = i;
if (length % 2 == 0)
half = length / 2;
else
half = length - ((length - 1) / 2);
for (i = half; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
