#include "holberton.h"
/**
*_memcpy-function copies n bytes from memory area src to memory area dest.
*@n: n bytes from memory area src to memory area dest.
*@dest : destination copy
*@src :source of copy.
*Return: pointer dest.
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
