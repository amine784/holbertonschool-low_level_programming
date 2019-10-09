#include "holberton.h"
/**
*_check - help tthe function is_prime_number
*@x: int type
*@y: int type
*Return: 0
**/
int _check(int x, int y)
{
if (x == y)
return (1);
else if  (y % x == 0)
return (0);
else
return  (_check(x + 1, y));
}
/**
*is_prime_number - check if the number is prime
*@n: int type
*Return: 0.
**/
int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n <= 1)
return (0);
return (_check(2,  n));
}
