#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main- program that add positive numbers
*@argc:int type that contain the nbre of arguments.
*@argv:char pointer that contain the name of argument
*Return: always 1.
**/
int main(int argc, char *argv[])
{
int c1, c2;
int s = 0;
if (argc < 1)
printf("0");
for (c1 = 1; c1 < argc; c1++)
{
s += atoi(argv[c1]);
for (c1 = 0; argv[c1][c2] != '\0'; c2++)
{
if (!(isdigit(argv[c1][c2])))
{
printf("Error\n");
return (0);
}
}
}
printf("%d\n", s);
return (0);
}
