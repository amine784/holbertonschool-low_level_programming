#include "holberton.h"
/**
*_strspn -function that gets the length of a prefix substring.
*@s: string to test.
*@accept: pattern to count ++.
*Return: number of bytes in the initial segment of s which consist
*only bytes from accept.
**/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k, l = 0;
for (i = 0; accept[i] != '\0' ; i++)
;
for (j = 0 ; (s[j] != '\0') && (s[j] != ' ') ; j++)
{
for (k = 0 ; k < i ; k++)
{
if (accept[k] == s[j])
{
l++;
}
}
}
return (l);
}
