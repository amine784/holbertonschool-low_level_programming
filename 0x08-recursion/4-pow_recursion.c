#include "holberton.h"
/**
*_pow_recursion- function that returns the value of
*x raised to the power of y.
*@x: int type.
*@y: int type.
*Return: 0 ;
**/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
else if (y % 2 == 0)
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
else
return (x * (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2)));
}
