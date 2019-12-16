#include "holberton.h"
#include <stdio.h>
/**
* wildcmp-function that compare 2 strings
*@s1:char type
*@s2:char type
*Return:Always success.
**/
int wildcmp(char *s1, char *s2)
{
char delim = '\0';
int c;
char *S1 = s1 + 1, *S2 = s2 + 1;
if (*s1 == delim  && *s2 == delim)
return (1);
if (*s1 == *s2)
return (wildcmp(S1, S2));
if (*s1 == delim && *s2 == delim)
return (wildcmp(s1, S2));
if (*s2 == '*')
{
c = (wildcmp(s1, S2)) || (wildcmp(S1, s2));
return (c);
}
return (0);
}
