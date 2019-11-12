#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* append_text_to_file-functino that append text
*@filename :the name of file.
*@text_content: char type.
*Return:Always success .
**/
int append_text_to_file(const char *filename, char *text_content)
{
int a = 0;
int b = 0;
int i = 0;
int ret = -1;
if (filename == NULL)
{
return (ret);
}
a = open(filename,  O_RDWR | O_APPEND);
if (a == ret)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
for (i = 0 ; text_content[i] != '\0'; i++)
{};
b = write(a, text_content, i);
if (b == ret)
{
return (-1);
}
return (1);
}
