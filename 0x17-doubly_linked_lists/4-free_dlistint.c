#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees all nodes from list
 * @head: head pointer
 * Return: void
 * Description: function that frees all nodes from list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *next = NULL;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
