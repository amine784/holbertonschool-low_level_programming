#include <stdio.h>
#include "lists.h"
/**
* *add_nodeint_end-function that add a new node at
*the end of list listint_t.
*@n:data to put in the new node
*@head: head of the list.
*Return:the address of the new element or NULL
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *elmt = NULL;
listint_t *tempo = NULL;
int i;
elmt = malloc(sizeof(listint_t));
if (elmt == NULL)
{
return (NULL);
}
(*elmt).n = n;
(*elmt).next = NULL;
tempo = *head;
if (tempo != NULL)
{
for (i = 0; (*tempo).next != NULL; i++)
tempo = (*tempo).next;
(*tempo).next = elmt;
return (elmt);
}
*head = elmt;
return (elmt);
}
