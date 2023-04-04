#include "lists.h"
/**
* sum_listint - calculates the sum of the elements in the list
* @head: pointer to the first element in the list]
* Return: returns an int
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int counter = 0;

	while (temp != NULL)
	{
		counter += temp->n;
		temp = temp->next;
	}
	return (counter);
}
