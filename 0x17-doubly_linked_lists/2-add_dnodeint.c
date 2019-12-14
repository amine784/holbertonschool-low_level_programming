#include"lists.h"
/**
* *add_dnodeint-function that a node begin of doubly list elements.
*@head first node of :doubly linked lists.
*@n:value of new node
*Return:Always success.
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
int buffer = sizeof(dlistint_t);
dlistint_t *node = malloc(buffer);
if (node == NULL)
{
return (NULL);
}
if (*head != NULL)
{
(*head)->prev = node;
}
(*node).n = n;
(*node).next = *head;
*head = node;
(*node).prev = NULL;
return (node);
}
