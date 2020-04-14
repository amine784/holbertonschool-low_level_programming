#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
*linear_search-function that searches for a value in an array
*of integers using the Linear search algorithm
*@array:is a pointer to the first element of the array to search in
*@size:is the number of elements in array
*@value:is the value to search for
* Return: Always success
**/
int linear_search(int *array, size_t size, int value)
{
size_t c = 0;
for (; c < size ; c++)
{
printf("Value checked array[%lu] = [%d]\n", c, array[c]);
if (array[c] == value)
return (c);
}
return (-1);
}
