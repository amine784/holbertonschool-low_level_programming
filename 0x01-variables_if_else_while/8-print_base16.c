#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
    int i;
    for (i=0 ;i<10; i++)
    putchar(i+'0');
char alpha = 'a';
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
