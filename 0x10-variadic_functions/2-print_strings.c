#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*print_strings-function that returns  strings
*@separator:const char.
*@n:const unsigned int.
*Return: strings
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *c;
va_start(strings, n);
for (i = 0; i < n; i++)
{
c = va_arg(strings, char*);
if (c)
{
printf("%s", c);
}
else
printf("(nil)");
if ((separator != NULL)  && (i < (n - 1)))
printf("%s", separator);
}
va_end(strings);
printf("\n");
}
