#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: pointer to the head
* @index: the index of the node starting from 0
* Return: returns a pointer to the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *iterator;
	unsigned int counter;

	iterator = head;
	for (counter = 0; counter < index; counter++)
	{
		iterator = iterator->next;
	}

	if (iterator == NULL)
		return (NULL);
	return (iterator);
}
