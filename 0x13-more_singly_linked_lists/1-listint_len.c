#include "lists.h"
/**
* listint_len - print element of node
* @h: head of the list
*
* Return: the num of link
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
