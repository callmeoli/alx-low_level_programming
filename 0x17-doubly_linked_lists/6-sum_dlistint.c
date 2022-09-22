#include <stdio.h>
#include "lists.h"
/**
* sum_dlistint - return the sum of list
* @head: head of the llist
* Return: the sum of list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
