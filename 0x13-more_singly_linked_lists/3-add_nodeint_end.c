#include "lists.h"
/**
* add_nodeint_end - add node at the end
* @n: number to be added
* @head: the address of first element
* Return: head of new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = newnode;
	}
	return (*head);
}
