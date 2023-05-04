#include "main.h"
/**
 * print_binary - prints the binary representation of a decimal number.
 * @n: number to print in binary.
 */
void print_binary(unsigned long int n)
{
int i, cmp = 0;
unsigned long int actual;
for (i = 63; i >= 0; i--)
{
actual = n >> i;
if (actual & 1)
{
_putchar('1');
cmp++;
}
else if (cmp)
_putchar('0');
}
if (!cmp)
_putchar('0');
}
