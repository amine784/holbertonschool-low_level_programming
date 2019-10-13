#include <stdio.h>
/**
* main- program that print all arguments
*@argc:int type that contain the nbre of arguments.
*@argv:char pointer that contain the name of argument
*Return: always 0.
**/
int main(int argc,  char *argv[] __attribute__((unused)))
{
int i;
for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
