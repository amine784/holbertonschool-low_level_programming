#include <stdio.h>
#include <stdlib.h>
/**
* main-program that prints the minimum number of coins to make
*change for an amount of money
*@argv:arguments
*@argc:numbers of arguments
*Return:Always success
**/
int main(int argc, char *argv[])
{
int a, b = 0, i, tab[4] = {25, 10, 5, 2};
if (argc != 2)
{
printf("error\n");
return (1);
}
a = atoi(argv[1]);
if (a <= 0)
printf("%d\n", 0);
else
{
for (i = 0; i < 4; i++)
{
b += (a / tab[i]);
a %= tab[i];
}
b += a;
printf("%d\n", b);
}
return (0);
}
