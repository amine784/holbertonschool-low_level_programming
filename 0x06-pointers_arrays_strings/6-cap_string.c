#include "holberton.h"
/**
*cap_string - capitalize all words of string
*@s: string type
*Return: string
*/
char *cap_string(char *s)
{
int i = 0;
for (i = 0; s[i] != 0; i++)
{
if (i == 0)
{
if (s[i] >= 97  && s[i] <= 122)
{
s[i] = s[i] - 32;
}
}
if (s[i] == ' '
|| s[i] == '\t'
|| s[i] == '\n'
|| s[i] == '.'
|| s[i] == ','
|| s[i] == ';'
|| s[i] == '!'
|| s[i] == '?'
|| s[i] == '"'
|| s[i] == '('
|| s[i] == ')'
|| s[i] == '{'
|| s[i] == '}')
{
if (s[i + 1] >= 97  && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
