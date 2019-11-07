#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <math.h>
/**
* set_bit-that sets the value of a bit to 1 at a given inde
*@n:given
*@index:unsigned
*Return: Always success.
**/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;
a = (sizeof(n) * 4 * 4);
if (index < a)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
