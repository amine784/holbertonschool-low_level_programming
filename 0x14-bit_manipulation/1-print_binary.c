#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <math.h>
/**
* print_binary-function that prints the binary representation of a number.
*@n: int to convert.
*Return: Always success.
**/
void print_binary(unsigned long int n)
{
unsigned long int a;
a = n;
if (a > 1)
print_binary(a >> 1);
_putchar((a & 1) + '0');
}
