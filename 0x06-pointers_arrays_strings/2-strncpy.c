#include "holberton.h"
/**
* *_strncpy -function to copies  string.
* @dest  :  char type.
* @src  :  char type.
* @n  : int type.
* Return: Always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
int j = 0;
for (i = 0 ; dest[i] != '\0' ; i++)
;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
for ( ; j < n ; j++)
{
dest[j] = '\0';
}
return (dest);
}
