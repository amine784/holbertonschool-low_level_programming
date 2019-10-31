#include "lists.h"
#include <stdio.h>
/**
  * list_len - Return number of elements of  list
  * @h: header of  list
  * Return: number
  */

size_t list_len(const list_t *h)
{
const list_t *p = h;
unsigned int i = 0;
for (i = 0 ; p != NULL ; i++)
{
p = (*p).next;
}
return (i);
}
