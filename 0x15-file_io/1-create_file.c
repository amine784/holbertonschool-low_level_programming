#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_file-a function that creates a file.
*@filename:name of file .
*@text_content: char type.
*Return: Always success.
**/
int create_file(const char *filename, char *text_content)
{
int a = 0;
int b = 0;
int i = 0;
if (filename == NULL)
return (-1);
a = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (a == -1)
return (-1);
if (text_content != NULL)
{
for (i = 0 ; text_content[i] != '\0'; i++)
;
b = write(a, text_content, i);
}
if (b == -1)
return (-1);
return (1);
}
