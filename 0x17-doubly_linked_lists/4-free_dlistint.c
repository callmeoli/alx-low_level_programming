#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_dlistint -free linked list
* @head: header
* Return: no return value
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
