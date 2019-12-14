#include"lists.h"
/**
*print_dlistint-function that print doubly list elements.
*@h:doubly linked lists to prints its elements
*Return:Always success.
**/
size_t print_dlistint(const dlistint_t *h)
{
int i;
for (i = 0; h != NULL; i++)
{
printf("%d\n", (*h).n);
h = (*h).next;
}
return (i);
}
