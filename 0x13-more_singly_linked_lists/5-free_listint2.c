#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* free_listint2-function that free list
*@head: first node.
*Return always success
**/
void free_listint2(listint_t **head)
{
listint_t *a = NULL;
while (*head != NULL)
{
a = (*head)->next;
free(*head);
*head = a;
}
*head = NULL;
}
