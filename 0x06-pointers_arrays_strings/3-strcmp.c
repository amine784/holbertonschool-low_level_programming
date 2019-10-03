#include "holberton.h"
/**
 *_strcmp -  compare 2 strings.
 *@s1 : char type
 *@s2 : char type
 *Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
int l;
int len = 0;
int a = 0;
for (l = 0 ; s1[l] != '\0' ; l++)
{};
while (len < l && a == 0)
{
a = s1[len] - s2[len];
len++;
}
return (a);
}
