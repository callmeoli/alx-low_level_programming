#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a position
 * @head: The head of list
 * @index: The index, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	unsigned int count = 0;
	dlistint_t *head;
	dlistint_t *new;

	head = *h;
	if (!h)
		return ();
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			head->prev = new;
		*h = new;
		new->prev = NULL;
		new->next = head;
	}
	count = 1;
	while (count < idx)
	{
		head = head->next;
		if (head == NULL)
		{
			free(new);
			return (NULL);
		}
	count++;
	}
	new->next = head->next;
	new->prev = head;
	if (head->next)
		head->next->prev = new;
	head->next = new;
	return (new);
}
