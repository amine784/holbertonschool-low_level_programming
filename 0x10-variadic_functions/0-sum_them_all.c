#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all-function that returns the sum of all its parameters.
*@n:const unsigned int type
*Return: sum of all arguments
**/
int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
unsigned int i;
unsigned int s = 0;
va_start(numbers, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
s += va_arg(numbers, unsigned int);
}
va_end(numbers);
return (s);
}
