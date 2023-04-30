#include "lists.h"
/**
 * free_listint - function thatfrees a linked list
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
