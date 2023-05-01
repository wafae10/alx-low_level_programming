#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: a pointer to the first element in the list
* @n: data to insert in the new element.
*
* Return:  the address of the new element (if success), or NULL (if failed)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
