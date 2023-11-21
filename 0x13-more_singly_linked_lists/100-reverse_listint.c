#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to pointer to the first node of the linked list to reverse
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur_node, *prev_node;

	cur_node = *head;
	prev_node = NULL;
	*head = NULL;

	while (cur_node != NULL)
	{
		*head = cur_node->next;
		cur_node->next = prev_node;
		prev_node = cur_node;
		cur_node = *head;
	}

	*head = prev_node;
	return (*head);
}
