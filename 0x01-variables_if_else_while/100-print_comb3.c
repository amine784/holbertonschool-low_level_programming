#include <stdio.h>
/**
 * main - main block
 * Description:  .
 * You can only uses.
 * Return: 0
 */
int main(void)
{
  int i,j;
for (i = 48; i <= 57; i++)
for (j = 48; j <= 57; j++)
if (i < j)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
