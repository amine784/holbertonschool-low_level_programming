#include "holberton.h"
/**
*_strpbrk -function that searches a string for any of a set of bytes.
*@s: string to test
*@accept:ocates the first occurrence in the string s.
*of any of the bytes in the string accept.
*Return:a pointer to the byte in s that matches one of,
*the bytes in accept, or NULL if no such byte is found.
**/
char *_strpbrk(char *s, char *accept)
{
int i, j, k;
for (i = 0 ; s[i] != '\0' ; i++)
;
for (j = 0 ; j < i ; j++)
{
for (k = 0 ; accept[k] != '\0' ; k++)
{
if (s[j] == accept[k])
{
return (&(s[j]));
}
}
}
return (0);
}
