#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int or);
/**
 * create_buffer - Allocates space for a buffer.
 * @file: name of the file to store chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *b;
b = malloc(sizeof(char) * 1024);
if (b == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return ();
}
/**
 * close_file - it closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int or)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", or);
exit(100);
}
}
/**
 * main - it copies the contents of a file to a new file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 (if successful).
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *b;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
b = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(p, b, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(b);
exit(98);
}
w = write(to, b, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(b);
exit(99);
}
r = read(from, b, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(b);
close_file(from);
close_file(to);
return (0);
}
