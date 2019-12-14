#include"lists.h"
/**
* sum_dlistint-functino that return sum of node
*@head first node of :doubly linked lists.
*Return:Always success.
**/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
int i;
for (i = 0; head != NULL; i++)
{
sum += (*head).n;
head = (*head).next;
}
if (i == 0)
{
return (0);
}
return (sum);
}
