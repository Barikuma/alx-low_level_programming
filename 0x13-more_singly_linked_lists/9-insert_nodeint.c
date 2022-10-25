#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the head pointer of thr node
 * @idx: the index to insert the new node
 * @n: the integer data to be inserted at that node
 * Return: address of the new node or NULL if failed
 *		or NULL if a node can't be inserted at that index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	ptr = *head;

	while (idx > 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
