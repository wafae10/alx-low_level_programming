#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: first node in listint_t linked list 
* @index: index of the node in listint_t linked list
*
* Return: adress to the node we looking for or NULL if empty.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tmp = head;
while (tmp && i < index)
{
tmp = tmp->next;
i++;
}
return (tmp ? tmp : NULL);
}

