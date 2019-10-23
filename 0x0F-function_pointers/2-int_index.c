#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*int_index-returns the index of the first element for which
* the cmp function does not return 0
*@cmp:is a pointer to the function
*@array: array
*@size: size of array
*Return: 0 or -1 or index.
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if ((array == NULL) || (size <= 0) || (cmp == NULL))
for (i = 0; i < size; i++)
{
  if((cmp)(array[i]) == 1)
    return (i);
}
return (-1);
}
