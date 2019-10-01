#include "holberton.h"
/**
 *rev_string- reverse a string.
 *@s:char type.
 *Return: Always 0.
 */
void rev_string(char *s)
{
int i;
i = 0;
int k;
int l;
int j;
l = 0;
while (s[i] != 0)
{
i++;
}
j = i--;
for (j = 0; j < i / 2 ; j++)
{
k = s[l];
s[l] = s[j];
s[i] = k;
l--;
}
}
