#include "lists.h"
void free_list(list_t *head)
{
    list_t *temp;    
 
	temp = head;
while ((temp = head) != NULL)
    {
        head = temp->next;
        free(temp->str);
	free(temp);
    }

}
