#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets the length of a linked list
 * @h: a pointer to the first node of the linked list
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
