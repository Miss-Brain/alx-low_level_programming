#include "lists.h"

/**
 * sum_listint - function that sum up all the data(n) of listint_t linked list
 * @head: pointer that points to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
return (sum);




}
