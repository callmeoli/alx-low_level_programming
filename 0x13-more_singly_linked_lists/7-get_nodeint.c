#include "lists.h"
/**
* get_nodeint_at_index - get at index
* @head: head
* @index: index
*
* Return: the index pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int pos = 0;

	if (head == NULL)
	{
	return (NULL);
	}
	while (pos < index)
	{
	pos++;
	head = head->next;
	}
	return (head);
}
