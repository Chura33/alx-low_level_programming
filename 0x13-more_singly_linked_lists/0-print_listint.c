#include "lists.h"
/**
* print_listint - prints all the elements in a linked list
* @h: a pointer to the head node
* Return: this returns the number of elements in the linked list
*/

size_t print_listint(const listint_t *h)
{
	const struct listint_s *temp1 = h;
	size_t counter = 0;

	while (temp1 != NULL)
	{
		printf("%d\n", temp1 -> n);
		counter++;
		temp1 = temp1 -> next;
	}
	return (counter);
}
