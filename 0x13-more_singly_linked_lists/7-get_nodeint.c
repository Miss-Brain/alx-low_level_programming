#include "lists.h"

/**
 * get_nodeint_at_index - function pointer that return nth node
 * @head: pointer that points to listint_t list
 * @index: index of node
 * Return: nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (0);
	while ((i < index) && head != NULL)
	{

		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

return (NULL);
}
