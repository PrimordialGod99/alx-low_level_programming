#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: double pointer to the head node of the list
 *
 * Return: the data of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head == NULL) /* list is empty */
		return (data);

	temp = *head;
	*head = (*head)->next; /* update head to point to next node */
	data = temp->n;
	free(temp); /* free memory of deleted node */

	return (data);
}
