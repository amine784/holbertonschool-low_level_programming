#include"lists.h"
/**
* get_dnodeint_at_index-functino that get index node
*@head first node of :doubly linked lists.
*@index:unsigned type
*Return:Always success.
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head != NULL; i++)
{
if (index == i)
{
return (head);
head = (*head).next;
}
}
return (NULL);
}
