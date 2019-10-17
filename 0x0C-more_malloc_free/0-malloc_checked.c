#include "holberton.h"
#include <stdlib.h>
/**
* *malloc_checked-function that allocates memory using malloc
*@b: unsigned int
* Return: process termination with a status value of 98 else void.
**/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
