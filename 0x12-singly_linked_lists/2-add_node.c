#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node to the beginnig of a list
 * @head: pointer to a node pointer
 * @str: string to copy
 * Return: the address of the new element or NULL in case of failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (node);
}
