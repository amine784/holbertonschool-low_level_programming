#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* read_textfile-function that reads a text file and prints it
*to the POSIX standard output.
*@filename:name of file to print his contents.
*@letters: size_t type number of chararc to print to the POSIX.
*Return: Always success.
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
int a;
ssize_t R;
ssize_t W;
char *buffer;
if (filename == NULL)
{
return (0);
}
a = open(filename,  O_RDWR);
if (a  == -1)
{
return (0);
}
buffer = malloc(letters * (sizeof(char)));
if (buffer  == NULL)
{
return (0);
}
R = read(a, buffer, letters);
if (R == -1)
return (0);
buffer[letters] = '\0';
W = write(STDOUT_FILENO, buffer, R);
if (W == -1)
return (0);
close(a);
return (W);
}
