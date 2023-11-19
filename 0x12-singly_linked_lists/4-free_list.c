#include "lists.h"

/**
 * free_list - Frees allocated memory in the linked list
 * @head: Pointer to the first element of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *pcur;

	while (head != NULL)
	{
		pcur = head;
		head = head->next;
		free(pcur->str);
		free(pcur);
	}
}
