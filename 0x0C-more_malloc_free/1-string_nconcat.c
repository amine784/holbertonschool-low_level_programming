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
unsigned int i, j, k, l;
char *p;
if (s1 != NULL)
for (i = 0; s1[i] != '\0'; i++)
;
if (s2 != NULL)
for (j = 0; s2[j] != '\0'; j++)
;
if (n < j)
{
j = n;
k = i + j;
k++;
p = malloc(sizeof(char) * k);
}
else
p = malloc(sizeof(char) *(i + n + 1));
if (p == NULL)
{
return (NULL);
}
for (l = 0; l < i; l++)
{
p[l] = s1[l];
}
for (l = 0; l < j; l++)
{
p[l + i] = s2[l];
}
p[k - 1] = '\0';
return (p);
}
