#include <stdio.h>
/**
* main- program that prints number of arguments passed into it
*@argc:int type that contain the nbre of arguments.
*@argv:char pointer that contain the name of argument
*Return: always 0.
**/
int main(int argc,  char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
