#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_listint_len - it counts the number of uniq nodes in th elinked list.
* @head: a pointer to the head of the listint_t.
*
* Return: 0 if the list is not looped.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *A, *B;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
A = head->next;
B = (head->next)->next;
while (B)
{
if (A == B)
{
A = head;
while (A != B)
{
nodes++;
A = A->next;
B = B->next;
}
A = A->next;
while (A != B)
{
nodes++;
A = A->next;
}
return (nodes);
}
A = A->next;
B = (B->next)->next;
}
return (0);
}
/**
* print_listint_safe - Prints the listint_t list.
* @head: a pointer to the head of the linked list.
*
* Return: number of nodes in the linked list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}

