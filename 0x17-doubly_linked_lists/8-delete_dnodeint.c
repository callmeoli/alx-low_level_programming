#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a position
 * @head: The head of list
 * @index: The index, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *nhead;

	nhead = *head;
	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0 && nhead != NULL)
	{
		if (nhead->next)
		{
			*head = nhead->next;
			nhead->next->prev = NULL;
		}
		free(nhead);
	return (1);
	}
	count = 1;
	while (count <= index)
	{
		nhead = nhead->next;
		if (nhead == NULL)
		{
			return (-1);
		}
	count++;
	}
	nhead->prev->next = nhead->next;
	nhead->next->prev = nhead->prev;
	if (nhead != NULL)
		free(nhead);
	return (1);
}
