#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* sum_listint-function that return the sum of data.
*@head:pointer to the first
*Return: Always success.
**/
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *c;
c = head;
if (c == NULL)
return (0);
s = 0;
while (c != NULL)
{
s = s + (*c).n;
c = (*c).next;
head = c;
}
return (s);
}
