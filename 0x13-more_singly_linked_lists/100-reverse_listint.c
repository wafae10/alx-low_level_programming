#include "lists.h"
/**
* reverse_listint - reverses a linked list.
* @head: pointer to the first node in the list.
*
* Return: address to the first node in the new list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = perv;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}

