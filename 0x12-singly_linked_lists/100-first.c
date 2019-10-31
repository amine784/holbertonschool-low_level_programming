#include <stdio.h>
/**
* beforeMainFunction - function to run command before main function
*Return: always success
*/
void beforeMainFunction(void) __attribute__ ((constructor));
void beforeMainFunction(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
