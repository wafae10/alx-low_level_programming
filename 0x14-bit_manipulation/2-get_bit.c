#include "main.h"
/**
* get_bit - returns the value of a bit at a given index in a decimal form.
* @n: number to search.
* @index: index of the bit.
*
* Return: value of the bit at index, or -1 if fail.
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bitvalue;
if (index > 63)
return (-1);
bitvalue = (n >> index) & 1;
return (bitvalue);
}
