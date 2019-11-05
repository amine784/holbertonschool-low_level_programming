#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* free_listint-function that frees a list.
*@head:first node
*Return:Always success.
**/
void free_listint(listint_t *head)
{
while (head != NULL)
{
head = (*head).next;
free(head);
}
}
