#include "lists.h"
/**
* free_listint - program that frees the node list
* @head: pointer to the head of the linked list
* Return: return void
*/

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current  = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
