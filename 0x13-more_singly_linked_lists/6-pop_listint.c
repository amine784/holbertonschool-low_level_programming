#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
/**
* pop_listint-function that delete the head node of a list.
*@head:first node.
*Return: always success.
**/
int pop_listint(listint_t **head)
{
listint_t *a;
a = NULL;
int i;
i = 0;
a = *head;
if (a == NULL)
{
return (0);
}
*head = (*(*head)).next;
i = (*a).n;
free(a);
return (i);
}
