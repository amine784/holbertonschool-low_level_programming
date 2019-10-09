#include "holberton.h"
/**
* _sqt - function to help _sqrt_recursion to calculate sqrt of number
*@x: int type.
*@y:int type.
*Return: its all is ok .
**/
int _sqt(int x, int y)
{
if (x == (y * y))
return (y);
if (y  * y  >  x)
return (-1);
return (_sqt(x, y + 1));
}
/**
* _sqrt_recursion - gives sqrt of a number
*@n: number
*Return: int
**/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n == 1)
return (1);
if (n  < 1)
return (-1);
return (_sqt(n, 1));
}
