#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	char ALPHA = 'A';

	while (ALPHA  <= 'Z')
	{
		putchar(ALPHA );
	ALPHA ++;
	}
	putchar('\n');
	return (0);
}
