#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main- program that add positive numbers
*@argc:int type that contain the nbre of arguments.
*@argv:char pointer that contain the name of argument
*Return: always 1.
**/
int main(int argc, char  *argv[])
{
int i, j, s = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[i]);
}
printf("%d\n", s);
return (0);
}
