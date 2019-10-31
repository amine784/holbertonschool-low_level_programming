#include "lists.h"
#include <stdlib.h>
/**
* free_list - function to free nodes
*@head: pointer node
*Return: Always Success
*/
void free_list(list_t *head)
{
while (head != NULL)
{
free((*head).str);
free(head);
head = (*head).next;
}
}
