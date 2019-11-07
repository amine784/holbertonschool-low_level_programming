#include <stdio.h>
#include "holberton.h"
/**
* clear_bit-function that sets the value of a bit to 0 at a given index.
*@n:unsigned long int.
*@index :index
*Return: Always success
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a = 1;
unsigned int  b;
b = 8 * sizeof(n);
if ((*n == '\0') || (index > b))
{
return (-1);
}
a <<= index;
*n &= ~a;
return (1);
}
