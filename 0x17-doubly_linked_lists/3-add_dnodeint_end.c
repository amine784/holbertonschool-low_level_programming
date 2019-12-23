#include "lists.h"
/**
*_*add_dnodeint_end-function that add node at the end of list.
*@head:pointer refers to yhe first node il list
*@n:int type,data of the new node
*Return: Always success
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;
dlistint_t *c;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
(*node).n = n;
(*node).next = NULL;
c = *head;
if (c == NULL)
{
(*node).prev = NULL;
*head = node;
return (node);
}
while ((*c).next != NULL)
{
c = (*c).next;
}
(*c).next = node;
(*node).prev = c;
return (node);
}
