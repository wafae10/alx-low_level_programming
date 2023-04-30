#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: a pointer for the first node in the list.
 * @n: the data to add in the new node
 * 
 * return: the address of the new element if success or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new= malloc (sizeof(listint_t));
if (!new)
return(NULL);
new->n= n;
new->next= *head;
*head= new;
return(new);
}
