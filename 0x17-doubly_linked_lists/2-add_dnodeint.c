
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 * @n: element to be added
 * @head: pointer to a pointer to the head of a list
 *
 * Return: address of the new element
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);

