#include "holberton.h"
/**
*_strstr-function that locates a substring.
*@haystack: return string.
*@needle: string to test.
*Return: a pointer to the beginning of the located substring,
*or NULL if the substring is not found.
**/
char *_strstr(char *haystack, char *needle)
{
int i, j = 0, k;
for (i = 0 ; haystack[i] ; i++)
{
if (needle[0] == haystack[i])
{
j = i;
for (k = 0; needle[k] && haystack[i] ; k++)
{
if (needle[k] != haystack[j])
{
j = 0;
break;
}
else
j++;
}
}
if (j != 0)
return (&(haystack[i]));
}
return (0);
}
