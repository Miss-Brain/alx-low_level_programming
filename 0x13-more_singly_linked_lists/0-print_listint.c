#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer as an argument that represent the number of nodes
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		i++;
		h = h->next;
	}
	return (i);



}
