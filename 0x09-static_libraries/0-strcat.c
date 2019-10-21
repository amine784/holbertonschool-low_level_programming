#include "holberton.h"
/**
*_strcat(char *dest, char *src)-function appends the src string to
*the dest string, overwriting the terminating null byte
*(\0) at the end of dest, and then adds a terminating null byte
*@dest : char type.
*@src : char type.
*Return: dest .
*/
char *_strcat(char *dest, char *src)
{
int i;
int l = 0;
int len = 0;
while (dest[l] != '\0')
l++;
while (src[len] != '\0')
len++;
for (i = 0; i <= len; i++)
{
dest[l + i] += src[i];
}
return (dest);
}
