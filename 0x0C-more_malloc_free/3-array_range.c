#include "holberton.h"
#include <stdlib.h>
/**
* *array_range-function that creates an array of integers.
*@min: int type
*@max : int type
* Return: null or pointer.
**/
int *array_range(int min, int max)
{
int i, s;
int *p;
if (min > max)
return (NULL);
s = max - min + 1;
p = malloc(sizeof(int) * s);
if (p == NULL)
return (NULL);
for (i = 0; i < s; i++)
{
p[i] = min;
min++;
}
return (p);
}
