#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to address of head node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tem, *cur = head;

	while (cur != NULL)
	{
		tem = cur->next;
		free(cur);
		cur = tem;
	}
}
