#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* listint_len-function that print length of list.
*@h:list input .
*Return: Always success.
**/
size_t listint_len(const listint_t *h)
{
int len = 0;
while (h != NULL)
{
len += 1;
h = (*h).next;
}
return (len);
}
