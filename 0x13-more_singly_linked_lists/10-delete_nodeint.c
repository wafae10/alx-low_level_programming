#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node in a linked list at the index of the linked list
* @head: pointer to the first element in the list.
* @index: index of the node to be deleted
*
* Return: 1 (if success), or -1 (if fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
listint_t *actual = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (i < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
i++;
}
actual = tmp->next;
tmp->next = actual->next;
free(actual);
return (1);
}

