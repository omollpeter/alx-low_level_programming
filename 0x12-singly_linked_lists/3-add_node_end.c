#include "lists.h"

/**
 * add_node_end -  Adds node at the back of a linked list
 * @head: Pointer to pointer of the first node in the list;
 * @str: String to feed as node data
 *
 * Return: pointer to the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *pcur;
	unsigned int len;

	len = strlen(str);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		pcur = malloc(sizeof(list_t));
		if (!pcur)
			return (NULL);
		pcur = *head;
		while (pcur->next != NULL)
		{
			pcur = pcur->next;
		}
		pcur->next = new_node;
	}

	return (new_node);
}
