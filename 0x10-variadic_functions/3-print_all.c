#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all-function that print anything.
*@format:format input.
*Return:always success.
**/
void print_all(const char * const format, ...)
{
int i;
int a = 0;
double f;
char *s;
va_list arg;
va_start(arg, format);
while (format && format[a])
{
switch (format[a])
{
case 'c':
i = va_arg(arg, int);
printf("%c", i);
break;
case 'i':
i = va_arg(arg, int);
printf("%i", i);
break;
case 'f':
f = va_arg(arg, double);
printf("%f", f);
break;
case 's':
s = va_arg(arg, char *);
if (s == NULL)
{
s = "(nil)";
}
printf("%s", s);
break;
}
if ((format[a] == 'c' || format[a] == 'i' || format[a] == 'f' ||
format[a] == 's') && format[a  + 1] != '\0')
printf(", ");
a++;
}
va_end(arg);
printf("\n");
}
