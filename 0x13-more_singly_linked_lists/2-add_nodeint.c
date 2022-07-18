#include "lists.h"
/**
* add_nodeint - add node at the first of linked list
* @head: the first address of list
* @n: num to be added
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	
	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
