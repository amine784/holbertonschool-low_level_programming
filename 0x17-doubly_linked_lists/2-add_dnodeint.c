#include"lists.h"
/**
* *add_dnodeint-function that a node begin of doubly list elements.
*@head first node of :doubly linked lists.
*@n:value of new node
*Return:Always success.
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}
(*node).n = n;
(*node).next = *head;
(*node).prev = NULL;
*head = node;
return (node);
}
