#include "lists.h"
/**
* add_nodeint_end - adds a node at the end of a linked list
* @head: pointer to the first element in the list
* @n: the element inside the list item
* Return: returns the address of the last node or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *iterator;

	temp = (listint_t *)malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	iterator = *head;

	while (iterator->next != NULL)
	{
		iterator = iterator->next;
	}
	iterator->next = temp;
	return (temp);
}
