#include "main.h"
/**
* flip_bits - counts the number of bits to flip.
* from one number to another
* @n: First number.
* @m: Second number.
*
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, cmp = 0;
unsigned long int act;
unsigned long int exclusive = n ^ m;
for (k = 63; k >= 0; k--)
{
act = exclusive >> k;
if (act & 1)
cmp++;
}
return (cmp);
}
