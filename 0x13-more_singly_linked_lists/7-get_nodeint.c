#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node in the list
 * @index: index of the node
 *
 * Return: pointer to the nth node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp = head;
while (temp && i < index)
{
tmp = temp->next;
i++;
}
return (tmp ? tmp : NULL);
}
