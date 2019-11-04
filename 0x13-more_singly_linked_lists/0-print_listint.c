#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* print_listint-function that print all elements of list
*@h: input
*Return: Always success.
**/
size_t print_listint(const listint_t *h)
{
int i;
i = 1;
while (h != NULL)
{
printf("%d", (*h).n);
printf("\n");
h = (*h).next;
i++;
}
return (i - 1);
}
