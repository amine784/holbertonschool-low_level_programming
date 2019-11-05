include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
/**
* *get_nodeint_at_index-a function that returns the nth node
*of a listint_t linked list.
*@head: first node 1.
*@index:the index of the node .
*Return:Always success.
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *c = NULL;
unsigned int i = 0;
c = head;
if (c == NULL)
{
return (NULL);
}
for (i = 0; i <  index; i++)
{
c = (*c).next;
if (c == NULL)
{
return (NULL);
}
}
return (c);
}
