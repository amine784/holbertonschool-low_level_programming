#include"lists.h"
/**
* free_dlistint-function that a node begin of doubly list elements.
*@head first node of :doubly linked lists.
*Return:Always success.
**/
void free_dlistint(dlistint_t *head)
{
dlistint_t *h = NULL;
int i;
for (i = 0; head != NULL; i++)
{
h = head;
head = (*head).next;
free(h);
}
}
