#include "lists.h"
#include <stdio.h>
/**
* print_list -that prints all  elements of list.
* @h: header of the list
* Return: An unsigned integer, number of nodes
**/
size_t print_list(const list_t *h)
{
const list_t *p = h;
unsigned int i;
for (i = 0; p != NULL; i++)
{
if ((*p).str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", (*p).len, (*p).str);
p = (*p).next;
}
return (i);
}
