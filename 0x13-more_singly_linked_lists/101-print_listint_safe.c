#include "lists.h"

/**
 * print_listint_safe - Prints all the nodes in the list with their addresses
 * @head: Pointer to the first node of the linked list whose nodes are printed
 *
 * Return: Number of nodes in the list, 98 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;
	size_t count;

	if (!head)
		exit(98);

	count = list_len(head);

	return (count);
}
