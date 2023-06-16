#include "lists.h"
/**
* add_dnodeint - adds a node to beginning of list
* @head: pointer to pointer to head of the list
* @n: the integer to be insterted in the list
* Return: returns a pointer to dlistint_t
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *thead = *head;

	if (!temp)
		return (NULL);

	if (!*head)
	{
		temp->n = n;
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
		return (*head);
	}
	temp->n = n;
	temp->prev = NULL;
	thead->prev = temp;
	temp->next = thead;
	*head = temp;
	return (*head);
}
