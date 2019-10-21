#include "holberton.h"
/**
*_memset-function that fills memory with a constant byte.
*@s :pointer return.
*@n : fills bytes of the memory
*@b :constant byte.
*Return: s.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
s[i] = b;
return (s);
}
