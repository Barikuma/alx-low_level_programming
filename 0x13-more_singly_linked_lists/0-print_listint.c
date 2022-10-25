#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: address of the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h == NULL)
		return (i);
	printf("%d\n", h->n);
	i = print_listint(h->next);
	return (++i);
}
