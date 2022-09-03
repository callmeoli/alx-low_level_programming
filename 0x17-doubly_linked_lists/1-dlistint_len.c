#include <stdio.h>
#include "lists.h"
/**
* print_dlistint -print content form liked list
* @h: header
* Return: size of linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
dlistint_t *current;
int count = 0;

current = (dlistint_t *)h;
while (current != NULL)
{
	current = current->next;
	count++;
}
return (count);
}
