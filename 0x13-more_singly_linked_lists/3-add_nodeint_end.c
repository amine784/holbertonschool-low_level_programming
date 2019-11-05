#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
elmt = malloc(sizeof(listint_t));
if (elmt == NULL)
{
return (NULL);
}
(*elmt).n = n;
(*elmt).next = NULL;
listint_t *tempo;
tempo = *head;
if (tempo != NULL)
{
while ((*tempo).next != NULL)
tempo = (*tempo).next;
}
if (tempo != NULL)
{
(*tempo).next = elmt;
}
else
{
*head = elmt;
}
return (elmt);
}
