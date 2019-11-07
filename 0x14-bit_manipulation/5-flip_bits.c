#include <stdio.h>
#include "holberton.h"
/**
* flip_bits-unction that returns the number of bits you would need to
* flip to get from one number to anothe
*@n:unsigned long int.
*@m:unsigned.
*Return: Always success .
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a = 1;
unsigned long int b;
unsigned long int c;
unsigned int i = 0;
unsigned int j = 0;
b = n ^ m;
c = (sizeof(unsigned long int) * 8);
while (i < c)
{
if (a == (b & a))
j++;
a <<= 1;
i++;
}
return (j);
}
