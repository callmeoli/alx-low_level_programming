#include "lists.h"
/**
* pop_listint - delet the first node
* @head: the head of the node
* Return: the value
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
