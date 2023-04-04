#include "lists.h"
/**
* add_nodeint -  Adds a node at the beginning of the list
* @head: a pointer to a pointer to the head node
* @n: the element in the node
* Return: return a pointer to node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *(head);
	*head = temp;
	return (temp);
}
