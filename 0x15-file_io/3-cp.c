#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
* main-main_function to copy buffer to anodher file.
*@argc:number of arguments.
*@argv:arguments lists.
*Return:Always success.
**/
int main(int argc, char *argv[])
{
int rd = 1024, wr = 0, c = 0, from, to, c1 = 0;
char bf[1024];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
from = open(argv[1], O_RDONLY);
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", argv[1]);
exit(98);
}
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to == -1)
dprintf(STDERR_FILENO, "Error: Can't write  to %s\n", argv[2]), exit(99);
while (rd == 1024)
{
rd = read(from, bf, 1024);
if (rd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
wr = write(to, bf, rd);
if (wr != rd)
{
dprintf(STDERR_FILENO, "Error: Can't write  to  file %s\n", argv[2]);
exit(99);
}
}
c = close(from);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close from %s\n", argv[1]);
exit(100);
}
c1 = close(to);
if (c1 == -1)
dprintf(STDERR_FILENO, "Error: Can't close to %s\n", argv[2]), exit(100);
return (0);
}
