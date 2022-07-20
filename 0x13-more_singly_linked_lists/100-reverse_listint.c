#include "lists.h"
/**
* reverse_listint - revres linked lists
* @head: head of the lisr
* Return: the head of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *res;

	temp = NULL;
	while ((*head) != NULL)
	{
	res = (*head)->next;
	(*head)->next = temp;
	temp = *head;
	*head = res;
	}
	*head = temp;
	return (*head);
}
