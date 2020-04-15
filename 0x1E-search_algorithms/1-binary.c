#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
*binary_search- function that searches for a value in a
*sorted array of integers using the Binary search algorithm
*@array:is a pointer to the first element of the array to search in
*@size:is the number of elements in array
*@value:is the value to search for
* Return: Always success
**/
int binary_search(int *array, size_t size, int value)
{
size_t c, i = 0;
size_t low = 0;
size_t high = size - 1;
size_t middle;
if (size == 0)
return (-1);
for (; low <= high; i++)
{
printf("Searching in array: ");
for (c = low; c < high + 1; c++)
{
if (c == high)
{
printf("%d", array[c]);
}
else
printf("%d, ", array[c]);
}
printf("\n");
middle = (low + high) / 2;
if (array[middle] == value)
return (middle);
else if (array[middle] > value)
high = middle - 1;
else
low = middle + 1;
}
return (-1);
}
