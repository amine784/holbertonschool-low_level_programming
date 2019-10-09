#include "holberton.h"
/**
* _strl_rec - calculate length of string
* @s: pointer to string to be counted
* Return: return count
*/
int _strl_rec(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strl_rec(s + 1));
}
/**
*charok - solve palindrome
*@string: pointer to string to be counted
*@l: int type
*Return: return palindrome
*/
int charok(char *string, int l)
{
if (l <= 0)
return (1);
if (string[0] == string[l - 1])
{
return (charok(string + 1, l - 2));
}
else
return (0);
}
/**
*is_palindrome - funct of the task
*@s: pointer to string
*Return: 0
*/
int is_palindrome(char *s)
{
int l = _strl_rec(s);
if (l <= 1)
return (1);
else
return (charok(s, l));
}
