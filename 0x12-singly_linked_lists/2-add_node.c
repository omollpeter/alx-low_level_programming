#include "lists.h"

/**
 * add_node - Adds node to the beginning of the linked list
 * @head: pointer to pointer of the first node of the linked list
 * @str: String to add as data of the new node
 *
 * Return: Pointer to the newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int len;

	len = strlen(str);
	temp = *head;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->len = len;
	newnode->str = strdup(str);
	newnode->next = temp;
	*head = newnode;

	return (newnode);
}
