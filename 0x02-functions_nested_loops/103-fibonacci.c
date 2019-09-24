include "stdio.h"

/**
 * main - sum the even  numbers  below
 * 4000000 in  fibobnachi seq
 * Description: fibobnachi numbers
 * Return: 0
 */

int main(void)
{
	long int a  = 0;
	long int b  = 0;
	long int c  = 1;
	long int sum = 0;

	while (b < 4000000)
	{
		b = a + c;
		a = c;
		c = b;
		if (b % 2 == 0)
		{
			sum  = sum  + b;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
