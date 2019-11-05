#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* *add_nodeint-function that add a new node at the beginning of a
*@head:pointer to the first.
*@n:value.
*Return: NULL if failed.
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *_node;
_node = NULL;
_node = malloc(sizeof(listint_t));
if ((_node == NULL) || (head == NULL))
return (NULL);
(*_node).n = n;
(*_node).next = *head;
*head = _node;
return (_node);
}
