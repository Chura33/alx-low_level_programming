#include "lists.h"
/**
* listint_len - This calculates the length of a linked list
* @h: pointer that stores the address of the head
* Return: returns the length of the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const struct listint_s *temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
