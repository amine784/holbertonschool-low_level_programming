#include "holberton.h"
/**
**rot13-change lowercase to uppercase
*@s: pointer
*Return: return char
*/
char *rot13(char *s)
{
int i;
int j;
int a = 0;
char c1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char c2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c1[j] != '\0' && a  == 0; j++)
{
if (s[i] == c1[j])
{
s[i] = c2[j];
a = 1;
}
}
a = 0;
}
return (s);
}
