#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at a position
 * @h: The head of list
 * @idx: The index, starting at 0
 * @n: The value of new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *head;
	dlistint_t *new;

	head = *h;
	if (!h)
		return (NULL);
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
