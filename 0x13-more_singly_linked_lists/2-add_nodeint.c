#include "lists.h"

/**
 * add_nodeint -  a function pointer that add new node at the beginning
 * @n: nw element in a node
 * @head: pointer that points to the first pointer
 * Return: the address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n; /* set value */
	newnode->next = *head; /*new node points to first node*/
	*head = newnode; /*switch list pointer(head) to point to new*/




return (newnode);
}
