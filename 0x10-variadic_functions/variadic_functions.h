#ifndef VARDIAC_FUNCTIONS
#define VARDIAC_FUNCTIONS

#include <stdarg.h>
/**
*struct tab_data-new type of array that contain operator and adress function.
*@operator:pointer to adressfunction
*@adressFunc:contain adress of first instruction of function used
**/
typedef struct tab_data
{
char *operator;
void (*adressFunc)(va_list);
} type;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
