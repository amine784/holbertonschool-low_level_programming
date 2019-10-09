#include "holberton.h"
/**
* _print_rev_recursion(char *s)-function that prints a string in rev
*followed by a new line.
*@s: type char :string to print.
*Return: string s in reverse.
**/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
