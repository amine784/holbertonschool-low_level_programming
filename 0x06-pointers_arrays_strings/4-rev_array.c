#include "holberton.h"
/**
*reverse_array - reverse the contenent of an array of integer
* @a : pointer to an array
* @n : int type for size of array
* Return: rev int
*/
void reverse_array(int *a, int n)
{
int i, j, k;
for (i = 0, j = n - 1; j >= i; i++, j--)
{
k = a[i];
a[i] = a[j];
a[j] = k;
}

}
