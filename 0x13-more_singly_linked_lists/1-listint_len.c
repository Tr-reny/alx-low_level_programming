#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list `listint_t`.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr_element = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}
