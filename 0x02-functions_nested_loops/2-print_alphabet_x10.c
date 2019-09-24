#include "holberton.h"
/**
 * main - entry point
 * alternative way 
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');
}
}
