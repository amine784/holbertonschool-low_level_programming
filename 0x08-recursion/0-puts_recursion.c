#include "holberton.h"
/**
* _puts_recursion(char *s)-function that prints a string
*followed by a new line.
*@s: type char :string to print.
*Return: string s.
**/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar (*s);
_puts_recursion(s + 1);
}
}
