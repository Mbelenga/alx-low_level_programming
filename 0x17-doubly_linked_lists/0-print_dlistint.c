#include "lists.h"

/**
 *print_dlistint - prints the elements of the given doubly linked list
 *@h: Pointer to the head
 *
 *Return: elements of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

