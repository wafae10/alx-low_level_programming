#include "lists.h"
/**
* listint_len - returns the number of elements in a listint_t list.
* @h: linked list to traverse in
*
* return: the number of nodes of the linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t nm = 0;
while (h)
{
nm++;
h = h->next;
}
return (nm);
}

