#include "lists.h"

/**
 * print_dlistint - This function prints all elements of the
 * given doubly list
 * @h: This is the pointer to the head
 *
 * Return: The elements of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
