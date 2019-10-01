#include "holberton.h"
/**
 * char *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : char  type.
 * @src : char type.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i;
while (*(src + length) != '\0')
{
length++;
}
for (i = 0; i <= length; i++)
{
dest[i] = src[i];
}
return (&dest[0]);
}
