#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: a pointer for the first eelement in the list
 * @n: data to drag in the new element.
 * 
 * return:the address of the new element (if success) or NULL (if it failed).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tmp= *head;
new= malloc(sizeof(listint_t));
if(!new)
return(NULL);
new->n=n;
new->next=NULL;
if (*head==NULL)
{
*head= new;
return(new);
}
while(tmp->next)
tmp=tmp->next;
tmp->next=new;
return(new);
}
