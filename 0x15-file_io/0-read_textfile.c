#include "main.h"
#include <stdlib.h>
/**
* read_textfile - reads a text file and prints to POSIX output.
* @filename: text file to read.
* @letters: number of letter to read.
*
* Return: number of letters it could read and print
* 0 if filename is NULL or (fail)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
ssize_t or;
ssize_t w;
ssize_t t;
or = open(filename, O_RDONLY);
if (or == -1)
return (0);
b = malloc(sizeof(char) * letters);
t = read(or, b, letters);
w = write(STDOUT_FILENO, b, t);
free(b);
close(or);
return (w);
}
