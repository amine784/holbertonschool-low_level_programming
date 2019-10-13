#include <stdio.h>
/**
* main- program that prints its name if
*you rename it wil print the new name
*@argc:int type that contain the nbre of arguments.
*@argv:char pointer that contain the name of argument
*Return: always 0.
**/
int main(__attribute__((unused)) int argc,  char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
