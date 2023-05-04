#include"main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: pointer of the binary number
*
* Return: the converted number (if success), or 0 if NULL.
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dval= 0;
if (!b)
return(0);
for (i=0;b[i];i++)
{
if (b[i]<'0'|| b[i]>'1')
return(0);
dval= 2*dval + (b[i]-'0');
}
return(dval);
}
