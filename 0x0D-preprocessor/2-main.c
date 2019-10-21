#include <stdio.h>
/**
* main -program that prints the name of the file it was
*compiled from, followed by a new line.
* Return: always success.
**/
int main(void)
{
printf("%S\n", __FILE__);
return (0);
}
