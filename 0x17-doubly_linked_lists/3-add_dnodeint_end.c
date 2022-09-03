#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: head of the list
 * @n: value
 * Return: the address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *current;

current = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
	return (NULL);
}
new->n = n;

if (*head == NULL)
{
	new->prev = NULL;
	new->next = NULL;
	*head = new;
	return (new);
}
else
{
while (current->next != NULL)
{
	current = current->next;
}
new->prev = current;
current->next = new;
new->next = NULL;
return (new);
}
}
