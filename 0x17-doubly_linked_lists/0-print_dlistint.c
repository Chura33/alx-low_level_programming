#include "lists.h"

/**
 * print_dlistint -  prints the integers in the nodes
 * @h: a pointer to the head
 * Return: returns a number
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
