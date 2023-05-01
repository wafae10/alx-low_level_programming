#include "lists.h"
/**
* reverse_listint - reverses a listint list.
* @head: adress to the first node in the list.
*
* Return: pointer to the first node of the new reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}

