#include "holberton.h"
/**
*swap_int-check the code for holberton school students.
*@a:int type.
*@b:int type.
*Return:Always 0.
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
