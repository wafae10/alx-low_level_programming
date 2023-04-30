#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node in the linked list at a given position
 * @head: pointer to the first node in the list.
 * @idx: index of the new node is added
 * @n: data to input in the new node
 *
 * Return: the address of the new node (if success) or NULL (if failed)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (k = 0; temp && k < idx; k++)
{
if (k == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
else
tmp = tmp->next;
}
return (NULL);
}
