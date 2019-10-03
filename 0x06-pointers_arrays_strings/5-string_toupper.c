#include "holberton.h"
/**
 * string_toupper-function that changes all lowercase letters of string to up.
*@s:pointer to string.
*Return: Always 0.
*/
char *string_toupper(char *s)
{
int i;
for (i = 0;  s[i] != '\0' i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
return(s)
}
