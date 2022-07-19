#include "lists.h"
/**
* insert_nodeint_at_index - return the address of the newly added node
* @head: the head
* @idx: index
* @n: data
* Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 1, count = 0;
	listint_t *newnode, *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *head;
	while (pos < idx)
	{
	tmp = tmp->next;
	pos++;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
	}
}
