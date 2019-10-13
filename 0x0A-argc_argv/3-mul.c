#include <stdio.h>
#include <stdlib.h>
/**
* main- program that mul two int
*@argc:int type that contain the nbre of arguments.
*@argv:char pointer that contain the name of argument
*Return: always 0.
**/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
