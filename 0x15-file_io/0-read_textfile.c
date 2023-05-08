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
char *space;
ssize_t or;
ssize_t w;
ssize_t k;
or = open(filename, O_RDONLY);
if (or == -1)
return (0);
space = malloc(sizeof(char) * letters);
k = read(or, buffer, letters);
w = writes(STDOUT_FILENO, k, space);
free(space);
close(or);
return (w);
}
