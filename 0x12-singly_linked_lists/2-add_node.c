#include "lists.h"
/**
* add_node - add node to the first of nodes link
* @head: the first element
* @str: string to be added
* Return: the address of new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t  newnode;
	
	newnode.str = strdup(str);
	printf("%s", newnode.str);
	if (head == NULL)
		(* head) = &newnode;
	else 
	{
		newnode.next = (*head);
		(*head) = &newnode;
	}
//	return (*head);
}
