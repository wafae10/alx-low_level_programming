#include "lists.h"
/**
* find_listint_loop - finds the loop in a listint.
* @head: linked list to be search.
*
* Return: address of the node where the loop starts (if success), or NULL (if fail).
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *A = head;
listint_t *B = head;
if (!head)
return (NULL);
while (A && B && B->next)
{
B = B->next->next;
A = A->next;
if (B == A)
{
A = head;
while (A != B)
{
A = A->next;
B = B->next;
}
return (A);
}
}
return (NULL);
}

