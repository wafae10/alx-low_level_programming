#include "lists.h"
/**
* sum_listint - it returns the sum of all the data (n) of a listint_t linked list
* @head: first node in the linked list
*
* Return: resulting sum , return 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp = head;
while (temp)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}