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
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
