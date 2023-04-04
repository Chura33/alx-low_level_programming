#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at index
* @head:pointer to pointer to head
* @idx: index of insertion
* @n: the element in the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *temp;
	unsigned int count = 0;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	temp = *head;

	while (temp)
	{
		temp = temp->next;
		count++;
	}

	if (idx > count)
		return (NULL);
	count = 0;
	temp = *head;
	for (count = 0; count < idx - 1; count++)
	{
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
