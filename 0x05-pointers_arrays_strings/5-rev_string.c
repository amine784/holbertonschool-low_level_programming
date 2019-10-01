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
while (s[i] != 0)
{
i++;
}
j = i - 1;
for (l = 0; l < i / 2 ; l++)
{
k = s[j];
s[j] = s[l];
s[l] = k;
j--;
}
}
