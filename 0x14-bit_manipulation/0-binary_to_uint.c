#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: pointing string containing the binary number
 *
 * Return: the converted number, or 0 if NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int devalue = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
devalue = 2 * devalue + (b[i] - '0');
}
return (devalue);
}
