#include "lists.h"
/**
* delete_nodeint_at_index - delet noe at index
* @head: head node
* @index: index
* Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head, *current = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
	*head = current->next;
	free(current);
	current = NULL;
	return (1);
	}
	else
	{
	while (index != 0)
	{
	previous = current;
	current = current->next;
	index--;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
	}
}
