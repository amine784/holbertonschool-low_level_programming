#include "holberton.h"
#include <stdlib.h>
/**
* **alloc_grid-function that return a pointer to a 2 dimonsional array
*and initializes a specific char.
*@width: int type
*@height: int  type
*Return: if width or height is 0 or negative return null.
**/
int **alloc_grid(int width, int height)
{
int i, j, k;
int **p;
if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
p = malloc(sizeof(int *) * height);
if (p == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
free(p[j]);
free(p);
return (NULL);
}
for (k = 0 ; k < width; k++)
p[i][k] = 0;
}
return (p);
}
