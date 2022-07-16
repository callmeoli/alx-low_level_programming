#include "lists.h"
/**
* list_len - conunt list and return number
* @h: header of the linked list
* Return: count
*/
size_t list_len(const list_t *h)
{
	list_t *temp;
	size_t count = 0;

	temp = (list_t *) h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
