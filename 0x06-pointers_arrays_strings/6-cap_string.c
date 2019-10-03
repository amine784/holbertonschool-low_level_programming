#include "holberton.h"
/**
*cap_string - capitalize all words of string
*@s: string type
*Return: string
*/
char *cap_string(char *s)
{
int i;
int l = 0;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i < l ; i++)
{
if (s[i] == '\n'
|| s[i] == '\t'
|| s[i] == ' '
|| s[i] == '.'
|| s[i] == ';'
|| s[i] == ','
|| s[i] == '!'
|| s[i] == '?'
|| s[i] == '"'
|| s[i] == '('
|| s[i] == ')'
|| s[i] == '{'
|| s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
}
}
return (s);
}
