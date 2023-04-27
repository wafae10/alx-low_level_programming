#include <stdio.h>
#include "lists.h"
/**
 * print_list -prints all the elements of a linked list.
 * @h: pointer to the list_t list
 * return: the number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t n= 0;
while (h)
{
n++;
h= h->next;
}
return(n);
}
