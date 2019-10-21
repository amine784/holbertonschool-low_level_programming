#include "holberton.h"
/**
*_strncat(char *dest, char *src)-unction is similar to the _strcat function,
* except that*it will use at most n bytes from src; and
*src does not need to be null-terminated if it contains n or more bytes
*@dest : char type.
*@src : char type.
*@n : int type.
*Return: dest .
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int l = 0;
int len = 0;
while (dest[l] != '\0')
l++;
while (src[len] != '\0')
len++;
for (i = 0; i < n && src[i] != '\0'  ; i++)
{
dest[l + i] += src[i];
dest[l + i] += '\0';
}
return (dest);
}
