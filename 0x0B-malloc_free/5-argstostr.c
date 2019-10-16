#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr-function function that concatenates all the
*arguments of your program.
*@ac: int type.
*@av:pointer char type.
*Return: Always 0.
**/
char *argstostr(int ac, char **av)
{
char *c;
int i, j;
int k = 0;
int l = 0;
if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
;
l += j + 1;
}
c = malloc(sizeof(char) * l + 1);
if (c == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
c[k] = av[i][j];
k++;
}
c[k] = '\n';
k++;
}
return (c);
}
