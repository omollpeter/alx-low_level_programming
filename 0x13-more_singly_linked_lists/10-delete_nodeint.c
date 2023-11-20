#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a specific index
 * @head: Pointer to pointer to the first node of the linked list
 * @index: Position of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node_to_delete;
	unsigned int count, i = 0;

	if (*head == NULL)
		return (-1);
	count = (unsigned int) list_len(*head);
	if (index == 0 && count == 0)
	{
		node_to_delete = *head;
		*head = NULL;
		free(node_to_delete);
		return (1);
	}
	else if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}
	else if (index > count)
		return (-1);
	temp = *head;
	while (i++ < index - 1)
	{
		temp = temp->next;
	}
	if (index == count)
	{
		node_to_delete = temp->next;
		temp->next = NULL;
		free(node_to_delete);
	}
	else
	{
		node_to_delete = temp->next;
		temp->next = node_to_delete->next;
		free(node_to_delete);
	}
	return (1);
}

/**
 * list_len - Computes the length of the linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of nodes in the linked list, 0 otherwise
 */
size_t list_len(const listint_t *h)
{
	listint_t *pcur;
	size_t count = 0;

	pcur = (listint_t *)h;
	while (1)
	{
		count++;
		pcur = pcur->next;

		if (pcur == NULL)
			break;
	}

	return (count);
}
