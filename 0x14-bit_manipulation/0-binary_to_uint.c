#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <math.h>
/**
* binary_to_uint-function that converts a binary number
*to an unsigned int.
*@b:pointer to char to convert
*Return: Always success.
**/
unsigned int binary_to_uint(const char *b)
{
int i = 0;
int j = 0;
int res = 0;
int s = 1;
if (b == 0)
{
return (0);
}
while (b[i] != '\0')
i++;
for (j = i - 1; j >= 0; j--)
{
if ((b[j] == '0')  || (b[j] == '1'))
{
if (b[j] == '1')
{
res = res + s;
}
s = s + s;
}
else
return (0);
}
return (res);
}
