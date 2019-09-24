#include <stdio.h>
/**
 * main - entry point
 * multiples sum
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 23, i;

for (i = 10; i < 1024; i++)
{
if (i %  3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
