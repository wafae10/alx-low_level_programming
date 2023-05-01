#include "lists.h"
/**
* print_listint - the function prints the elements of a listint_t list
* @h: linked list of type listint_t to be printed
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t nm = 0;
while (h)
{
printf("%d\n", h->n);
nm++;
h = h->next;
}
return (nm);
}
