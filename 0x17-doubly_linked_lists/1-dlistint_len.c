#include"lists.h"
/**
*dlistint_len-function that print len  doubly list elements.
*@h:doubly linked lists to prints its elements
*Return:Always success.
**/
size_t dlistint_len(const dlistint_t *h)
{
int i;
for (i = 0; h != NULL; i++)
{
h = (*h).next;
}
return (i);
}
