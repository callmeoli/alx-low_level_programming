#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_dnodeint_at_index - get the value at index
* @head: header
* @index: postion
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
dlistint_t *temp;
unsigned int count = 0;

current = head;
while (current != NULL && count < index)
{
	temp = current;
	current = current->next;
	count++;
}
if (current == NULL)
{
	return (NULL);
}
else
{
	return (current)
}
}