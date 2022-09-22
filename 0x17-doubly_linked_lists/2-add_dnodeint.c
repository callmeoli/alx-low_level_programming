#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_dnodeint -print content form liked list
* @head: header
* @n: number
* Return: size of linked list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *ew;

ew = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
	return (NULL);
}
new->n = n;
new->next = *head;
if (*head != NULL)
{
ew->prev = new;
}
*head = new;
return (new);
}
