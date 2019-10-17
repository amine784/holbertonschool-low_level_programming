#include "holberton.h"
#include <stdlib.h>
/**
* *string_nconcat-function that concatenates two strings.
*@s1: pointer to string s1
*@s2: pointer to string s2
*@n: unsigned int.
* Return: null or pointer.
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, l, m;
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
if (n < j)
{
j = n;
}
k = i + j + 1;
p = malloc(k *sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (l = 0; l < i; l++)
{
p[l] = s1[l];
}
for (m = 0; m < j; m++)
{
p[m + i] = s2[m];
}
p[k - 1] = '\0';
return (p);
}
