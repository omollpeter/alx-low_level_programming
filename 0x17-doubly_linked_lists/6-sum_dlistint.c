#include "lists.h"

/**
 * sum_dlistint - Computes the some of all data in a doubly linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: Sum of all data, 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;
	while(temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
