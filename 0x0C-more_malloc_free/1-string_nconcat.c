#include "holberton.h"
#include <stdlib.h>
/**
* _len - length ofstring
* @s: string
* Return: The length of s
*/
int _len(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
;
return (a);
}
/**
* *string_nconcat-function that concatenates two strings.
*@s1: pointer to string s1
*@s2: pointer to string s2
*@n: unsigned int.
* Return: null or pointer.
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = _len(s1);
j = _len(s2);
if (n > j)
n = j;
p = malloc(sizeof(char) * (i + n + 1));
if (p == NULL)
return (NULL);
for (k = 0; k < i; k++)
p[k] = s1[k];
for (; k < i + n; k++)
p[k] = s2[k - i];
p[i + n] = '\0';
return (p);
}

