include "holberton.h"
/**
 * _atoi - convert string to integer.
 * @s: string pointer
 * Return: type integer.
 */
int _atoi(char *s)
{
int i = 0;
int length = 0;
int num = 0;
int multi = 1;
int out = 0;
while (s[length] != '\0')
{
length++;
}
while (i < length && out == 0)
{
if (s[i] == 45)
multi *= -1;
if (s[i] >= 48 && s[i] <= 57)
{
num = num * 10 + (s[i] - 48);
if (s[i + 1] >= 48 && s[i + 1] <= 57)
out = 0;
else
out = 1;
}
i++;
}
return (multi *num);
}
