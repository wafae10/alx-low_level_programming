#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates space for a buffer.
 * @file: The name of the to store chars for.
 *
 * Return: A pointer to the allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - Close file descriptors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
int h;
h = close(fd);
if (h == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies content of a file to a new one.
 * @argc: The number of arguments.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do 
{
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} 
while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
