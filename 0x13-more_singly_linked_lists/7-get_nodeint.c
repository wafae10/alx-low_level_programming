#include "lists.h"
/**
* get_nodeint_at_index -  it returns the nth node of a listint_t linked list
* @head: first node in listint_t linked list 
* @index: index of the node to return listint_t linked list
*
* return: pointer to the node we looking for or NULL if node does not exist
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
