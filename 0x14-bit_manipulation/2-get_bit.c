#include <stdlib.h>
#include "holberton.h"

/**
*get_bit-that returns the value of a bit at a given index.
*@index: is the index, starting from 0 of the bit you want to get
*@n:bit given
*Return: Always success.
**/
int get_bit(unsigned long int n, unsigned int index)
{
int x, k;
x = n >> index;
k = (x & 1);
if (index < 31)
return (k);
else
return (-1);
}
