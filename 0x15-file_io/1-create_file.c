#include "main.h"
/**
* create_file - creates a file.
* @filename: name of the file to create.
* @text_content: Null terminated string to write to the file
*
* Return: 1 (if success), -1 (if failure)
*/
int create_file(const char *filename, char *text_content)
{
int or, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len]; len++)
}
or = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(or, text_content, len);
if (or == -1 || w == -1)
return (-1);
close(or);
return (1);
}
