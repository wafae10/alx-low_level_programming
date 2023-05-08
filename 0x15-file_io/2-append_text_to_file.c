#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of the file.
* @text_content: a pointer  string to add at the end of the file.
*
*Return: 1 (if successful) and -1 (if fail)
*/
int append_text_to_file(const char *filename, char *text_content)
{
int lenth = 0;
int w = 0;
int o = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lenth = 0; text_content[lenth]; lenth++)
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
