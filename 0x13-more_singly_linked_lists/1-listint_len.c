#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements
 * ina linked listint_t list
 * @h:pointer to the head of a listint_t list
 * Return: the nnumber of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
