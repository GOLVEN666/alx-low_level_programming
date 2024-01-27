#include "lists.h"

/**
 * sum_dlistint - gets sum of all nodes data
 * @head: header pointer
 * Return: sum of all nodes data
 * Description: gets sum of all nodes data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
