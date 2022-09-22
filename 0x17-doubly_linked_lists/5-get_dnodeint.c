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
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
