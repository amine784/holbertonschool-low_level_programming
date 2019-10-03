#include "holberton.h"
/**
*cap_string - capitalize all words of string
*@s: string type
*Return: string
*/
char *cap_string(char *s)
{
int l = 0;
int i;
while (s[l] != '\0')
l++;
for (i = 0; i < l ; i++)
{
if (s[i] == '\n'
|| s[i] == ' '
|| s[i] == '\t'
|| s[i] == '.'
|| s[i] == '"'
|| s[i] == '('
|| s[i] == ')'
|| s[i] == ';'
|| s[i] == ','
|| s[i] == '!'
|| s[i] == '?'
|| s[i] == '{'
|| s[i] == '}')
{
i += 1;
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}
}
return (s);
}
