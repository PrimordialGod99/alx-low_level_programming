#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Description: This function frees a linked list starting at the
 *              given head node.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
