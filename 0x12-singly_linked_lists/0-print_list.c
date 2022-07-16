#include "lists.h"
/**
* print_list - print the string in linked list while retuning count
* @h: head of the linked list
*
* Return: the count of strings
*/
size_t print_list(const list_t *h)
{
	list_t *temp;
	size_t count = 0;

	temp = (list_t *) h;
	while (temp != NULL)
	{
		count++;
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
