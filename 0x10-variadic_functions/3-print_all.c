#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_char-function that print char.
*@c:va_list type
*Return :nothing.
**/
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}
/**
* print_int-function that print integer.
*@i:va_list type
*Return :nothing.
**/
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
*print_float-function that print float .
*@f:va_list type
*Return :nothing.
**/
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}
/**
*print_string-function that print strings  .
*@s:va_list type
*Return :nothing.
**/
void print_string(va_list s)
{
char *c;
c = va_arg(s, char*);
if (c != NULL)
{
printf("%s", c);
}
else
printf("(nil)");
}
/**
* print_all-function that print anything.
*@format:format input.
*Return:always success.
**/
void print_all(const char * const format, ...)
{
int i, j;
void (*f)(va_list);
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
if (op[j].operator[0] == format[i])
{
printf("%s", separator);
f = op[j].adressFunc;
f(arg);
separator = ", ";
}
j++;
}
i++;
}
va_end(arg);
printf("\n");
}
