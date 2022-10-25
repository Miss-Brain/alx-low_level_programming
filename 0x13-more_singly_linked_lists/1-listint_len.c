#include "lists.h"

/**
 * listint_len - return th number of elements in a linked listint_list.
 * @h: pointer to the linked list
 * Return: number of elements in a linked listint_t list
 * i- counter
 */

size_t listint_len(const listint_t *h)
{

size_t i = 0;

while (h != NULL)
{
	i++;
	h = h->next;
}
return (i);

}
