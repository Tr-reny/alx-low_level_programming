#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - find number of nodes of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
