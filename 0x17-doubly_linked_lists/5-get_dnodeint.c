#include <stdio.h>
#include "lists.h"
/**
* get_dnodeint_at_index - give node value at N
* @head: head of the llist
* @index: index value
* Return: the Nth value
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;
	if (index == 0 && current != NULL)
	{
		return (current);
	}
	while (current->next != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	else

	{
		return (current);
	}

}
