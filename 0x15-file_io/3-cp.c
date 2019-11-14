#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
* main-main_function to copy buffer to anodher file.
*@argc:number of arguments.
*@argv:arguments lists.
*Return:Always success.
**/
int main(int argc, char *argv[])
{
int rd = 1024, wr = 1024, c = 1024, from, to, c1 = 1024;
char bf[1024];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
from = open(argv[1], O_RDONLY);
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file  %s", argv[1]);
dprintf(STDERR_FILENO, "\n"), exit(98);
}
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write  to  file %s", argv[2]);
dprintf(STDERR_FILENO, "\n"), exit(99);
}
while ((rd = read(from, bf, 1024)) > 0)
{
wr = write(to, bf, rd);
if ((wr != rd) || (wr < 0))
{
dprintf(STDERR_FILENO, "Error: Can't write  to  file %s", argv[2]);
dprintf(STDERR_FILENO, "\n"), exit(99);
}
if (rd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file  %s", argv[1]);
dprintf(STDERR_FILENO, "\n"), exit(98);
}
c = close(from);
if (c < 0)
dprintf(STDERR_FILENO, "Error: Can't close from %s\n", argv[1]), exit(100);
c1 = close(to);
if (c1 < 0)
dprintf(STDERR_FILENO, "Error: Can't close to %s\n", argv[2]), exit(100);
}
return (0);
}
