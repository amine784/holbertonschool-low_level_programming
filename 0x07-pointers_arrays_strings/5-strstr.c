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
int i=0;
int j=0;
while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i+j] ==needle[j])
j++;
else
break;
}if (needle[j])
{
i++;
j=0;
}
else
  return (&(haystack[i]));
}
return (0);
}
