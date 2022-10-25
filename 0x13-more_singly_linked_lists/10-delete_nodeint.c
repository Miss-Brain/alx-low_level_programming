#include "lists.h"

/**
 * delete_nodeint_at_index - delete nodes at index
 * @head: double pointer to list
 * @index: index of node at listint_t
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *currentnode;
	unsigned int i = 0;

	/*account for empty*/
	if (*head == NULL)
		return (-1);

	currentnode = *head;

	/*deleting beginning node*/
	if (index == 0)
	{
		*head = currentnode->next;
		free(currentnode);
		return (1);
	}
	/*iterate currentnode to idex prior to index we want to delete*/
	while (i < (index - 1) && currentnode != NULL)
	{
		currentnode = currentnode->next;
		i++;
	}
	/*account for index out of range: don't delete and return*/
	if (i != (index - 1) || currentnode->next == NULL)
		return (-1);
	/* link prior index before delete*/
	node = currentnode->next;
	currentnode->next = (currentnode->next)->next;
	free(node);

return (1);




}
