#include "lists.h"

/**
* dlistint_len - returns the length of a list
* @h: pointer to head
* Return: returns a number
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	while (temp)
	{
		temp = temp->next;
		num++;
	}
	return (num);
}
