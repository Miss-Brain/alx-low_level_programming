#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a listint_t list
 * @head: double pointer to the beginning of listint_t list
 * @n: integer to add to the list
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currentnode;


	newnode = malloc(sizeof(listint_t)); /*create new node*/

	if (newnode == NULL)
		return (NULL);

	/*setting value and pointer for new node*/
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL) /*if list is empty*/
	{
		*head = newnode;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL) /*keep looping till last nodee*/
		{
		currentnode = currentnode->next;
		}
		currentnode->next = newnode; /*linking last node to new node*/
	}

	return (newnode);

}
