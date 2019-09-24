#include <stdio.h>
/**
 * main - print fibonacci
 * fibonacci s
 * Return: always 0
 */
int main(void)
{
long int u0 = 1, u1 = 2, sum = 2;
int i;

for (i = 1; i < 31; i++)
{
if ((u0 + u1) % 2 == 0)
sum += u0 + u1;

u1 = u0 + u1;
u0 = u1 - u0;
}
printf("%ld\n", sum);
return (0);
}

