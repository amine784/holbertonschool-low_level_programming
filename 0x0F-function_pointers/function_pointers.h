#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int  size, void (*action)(int));
#endif
