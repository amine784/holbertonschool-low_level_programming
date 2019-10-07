#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums -prints the sum of the two diagonals of
* a square matrix of integers.
*@size: is int type.
*@a:pointer int type.
*Return: sum of diag.
**/
void print_diagsums(int *a, int size)
{
int i, j;
int k = 0;
int l = 0;
for (i = 0 ; i < size ; i++)
k += a[(size + 1) * i];
for (j = 0 ; j < size ; j++)
l += a[(size - 1) * (j + 1)];
printf("%d, %d\n", k, l);
}
