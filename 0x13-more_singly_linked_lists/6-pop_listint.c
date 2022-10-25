#include "lists.h"


/**
 * pop_listint - function that deletes th head node
 * @head: double pointer tht points to listint_t list
 * Return: the head node's data, n
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);


	return (n);
}
