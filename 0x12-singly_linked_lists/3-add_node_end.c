#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*add_node_end - adds new node at the endb
*@head: pointer the list
*@str: p string
*Return: always Success
*/
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *n, *m;
n = malloc(sizeof(list_t));
if (str == NULL)
return (NULL);
if (n == NULL)
return (NULL);
(*n).str = strdup(str);
if ((*n).str == NULL)
{
free(n);
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
i++;
}
(*n).len = i;
(*n).next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
m = *head;
while ((*m).next)
m = (*m).next;
(*m).next = n;
return (n);
}
