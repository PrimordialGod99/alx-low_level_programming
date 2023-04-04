/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = *head;
	listint_t *node_to_delete = NULL;
	unsigned int i = 0;

	/* If list is empty */
	if (*head == NULL)
		return (-1);

	/* If node to delete is the head */
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev_node);
		return (1);
	}

	/* Find the node before the one to delete */
	while (i < index - 1)
	{
		if (!prev_node || !(prev_node->next))
			return (-1);
		prev_node = prev_node->next;
		i++;
	}

	/* Delete the node */
	node_to_delete = prev_node->next;
	prev_node->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
