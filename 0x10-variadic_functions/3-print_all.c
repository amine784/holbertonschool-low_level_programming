#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*print_char-function that print char.
*@arg:va_list type
*Return :nothing.
**/
void print_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
* print_int-function that print integer.
*@arg:va_list type
*Return :nothing.
**/
void print_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}
/**
*print_float-function that print float .
*@arg:va_list type
*Return :nothing.
**/
void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}
/**
*print_string-function that print strings  .
*@arg:va_list type
*Return :nothing.
**/
void print_string(va_list arg)
{
char *c;
c = va_arg(arg, char*);
if (c == NULL)
{
c = "(nill)";
}
else
printf("%s", c);
}
/**
* print_all-function that print anything.
*@format:format input.
*Return:always success.
**/
void print_all(const char * const format, ...)
{
int i, j;
va_list arg;
char *separator = "";
type op[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL},
};
va_start(arg, format);
i = 0;
while (format && format[i])
{
j = 0;
while (op[j].operator != NULL)
{
  if (format[i] == *(op[j].operator))
{
printf("%s", separator);
op[j].adressFunc (arg);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(arg);
printf("\n");
}
