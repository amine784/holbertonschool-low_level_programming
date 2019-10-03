#include "holberton.h"
/**
* leet - function than encodes a string into 1337
* @s: string type
* Return: pointer to a string
*/

char *leet(char *s)
{
int i;
int j;
char a[] = "oOlLeEaAtT";
char b[] = "0011334477";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
s[i] = b[j];
}
}
return (s);
}
