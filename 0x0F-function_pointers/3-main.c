#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main program
 * @argc: arguments command line
 * @argv: size of arguments
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int (*operator)(int, int);
int a, b;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
operator = get_op_func(argv[2]);
a = atoi(argv[1]);
b = atoi(argv[3]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", operator(a, b));
return (0);
}
