#include "lists.h"
/**
 * print_listint - prints the elments of the linked list.
 * @h: linked list to be printed.
 * 
 * return : the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t num= 0;
while(h)
{
printf("%d\n",h->n);
num++;
h= h->next;
}
return(num);
}
