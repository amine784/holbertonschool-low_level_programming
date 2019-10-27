#ifndef __VARDIAC_FUNCTIONS__
#define __VARDIAC_FUNCTIONS__
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
*struct tab_data-new type of array that contain operator and adress function.
*@operator:pointer to adressfunction
*@adressFunc:contain adress of first instruction of function used
**/
typedef struct tab_data
{
char *operator;
void (*adressFunc)();
} type;
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
#endif
