#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index-function that deletes the node at index
*index of a listint_t linked list.
*@head:pointer to the first.
*@index:node for delate.
*Return: Always success.
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *a = *head;
listint_t *b = NULL;
int ind = index;
int i;
if (head == NULL)
{
return (-1);
}
if (*head == NULL)
{
return (-1);
}
if (ind == 0)
{
*head = (*a).next;
free(a);
a = NULL;
return (1);
}
ind -= 1;
for (i = 0; i != ind; i++)
{
a = (*a).next;
if (a == NULL)
{
return (-1);
}
}
b = (*a).next;
(*a).next = (*b).next;
free(b);
b = NULL;
return (1);
}
