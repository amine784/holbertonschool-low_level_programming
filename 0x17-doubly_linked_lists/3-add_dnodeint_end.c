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
dlistint_t *h;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
(*node).n = n;
(*node).next = NULL;
(*node).prev = NULL;
if (*head == NULL)
{
*head = node;
return (0);
}
h = *head;
while ((*h).next != NULL)
{
h = (*h).next;
}
(*h).next = node;
(*node).prev = h;
return (node);
}
