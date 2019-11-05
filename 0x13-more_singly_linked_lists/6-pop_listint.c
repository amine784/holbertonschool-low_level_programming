#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
/**
* pop_listint-function that delete ther first in the list
*@head:first node.
*Return: always success.
**/
int pop_listint(listint_t **head)
{
listint_t *a;
int i;
i = 0;
if (*head == NULL)
{
return (0);
}
a = (*head)->next;
i = (*head)->n;
free(*head);
*head = NULL;
*head = a;
return (i);
}
