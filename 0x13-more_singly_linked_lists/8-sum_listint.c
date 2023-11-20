#include "lists.h"

/**
 * sum_listint - Sums all the integer data for all the nodes in the linked list
 * @head: Pointer to the first node of the linked list
 *
 * Return: sum of all the integers, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	sum += temp->n;
	return (sum);
}
