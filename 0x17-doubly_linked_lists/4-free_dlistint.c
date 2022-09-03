#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* dlistint_len -print content form liked list
* @h: header
* Return: size of linked list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *temp;

current = head;
while (current != NULL)
{
	temp = current;
	current = current->next;
	free(temp);
}
}
