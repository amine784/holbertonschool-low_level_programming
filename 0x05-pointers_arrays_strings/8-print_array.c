#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array.
 * @a: array pointer.
 * @n: number of array elements to prints.
 *return Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
