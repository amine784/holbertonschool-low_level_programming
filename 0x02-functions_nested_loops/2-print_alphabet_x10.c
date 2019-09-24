#include "holberton.h"
/**
*print alphabet x10 function.
* alternative way for dsiplaying
*Return: Always 0 (Success).
*/
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');
}
}
