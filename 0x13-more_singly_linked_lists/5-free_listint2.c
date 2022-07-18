#include "lists.h"
/**
* free_listint2 - free lists
* @head: head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	}
}
