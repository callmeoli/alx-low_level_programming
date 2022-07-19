#include "lists.h"
/**
* sum_listint - sums list of node
* @head: head of node
* Return: sum of the linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
	sum = sum + tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}
