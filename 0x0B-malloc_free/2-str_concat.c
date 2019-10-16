#include "holberton.h"
#include <stdlib.h>
/**
* str_concat- functino that concatinates two strings
*@s1: char type string to concatinate
*@s2: char type string to concatinate
*Return: string or null
**/
char *str_concat(char *s1, char *s2)
{
int i, j, k, m;
int l = 0;
char *p;
if (s1 != NULL)
{
for (i = 0; s1[i] != '\0'; i++)
;
}
if (s2 != NULL)
{
for (j = 0; s2[j] != '\0'; j++)
;
}
l = i + j;
p = malloc(sizeof(char) * (l + 1));
if (p == NULL)
return (NULL);
for (k = 0; k < i; k++)
{
p[k] = s1[k];
}
for (m = 0; m < j; m++)
{
p[m + i] = s2[m];
}
return (p);
}
