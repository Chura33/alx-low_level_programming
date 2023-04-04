#include "lists.h"
/**
* pop_listint - pops the first item in the node list
* @head: pointer to pointer to head
* Return: returns an integer
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	data = temp->n;
	free(temp);
	return (data);
}
