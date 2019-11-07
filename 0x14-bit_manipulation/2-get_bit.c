#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <math.h>
/**
*get_bit-that returns the value of a bit at a given index.
*@index: is the index, starting from 0 of the bit you want to get
*@n:bit given
*Return: Always success.
**/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned  int a;
a = 1;
unsigned  int b;
b = (sizeof(n) * 8);
if (index > b)
{
return (-1);
}
a <<= index;
if (a & n)
{
return (1);
}
 return(0);
}
