#include "main.h"
/**
* get_endianness - checks if a machine is a little or a big endian
* Return: 0 (if big endian), 1 (if little endian)
*/
int get_endianness(void)
{
unsigned int k = 1;
char *c = (char *) &k;
return (*c);
}
