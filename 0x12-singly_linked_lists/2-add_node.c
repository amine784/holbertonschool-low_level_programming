#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* *add_node - function to add node to start
*@head: pointer list_t struct type
*@str: pointer input
*Return: Always Successs
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *n = NULL;
unsigned int i;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
for (i = 0 ; str[i] != '\0' ; i++)
;
(*n).len = i;
(*n).str = strdup(str);
(*n).next = *head;
*head = n;
return (*head);
}
