#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: pointer.
 *return always0.
 */
void rev_string(char *s)
{
int i = 0;
int j;
char a;
int b;
int len;
while ((*(s + i) != '\0'))
{
i++;
}
len = i;
b = len / 2;
for (j = 0; j < b ; j++)
{
a = s[j];
s[j] = s[len - 1 - j];
s[len - 1 - j] = a;	}
}
