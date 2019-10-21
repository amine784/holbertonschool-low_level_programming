#include "holberton.h"

/**
 * _atoi - converts  string to integer
 * @s: string to convert
 * Return: value of intg
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int a = 0;
while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
{
if (*(s + i) == '-')
sign *= -1;
i++;
}
while ((*(s + i) >= '0') && (*(s + i) <= '9'))
{
a = a * 10 + sign * (*(s + i) -'0');
i++;
}
return (a);
}
