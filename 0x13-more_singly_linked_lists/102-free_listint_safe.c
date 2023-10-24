#include "lists.h"
/**
 * _ra - reallocate memory for an array of pointers
 * @list: old list
 * @size: sizze of new list
 * @new: new node to add to list
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t x;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		newlist[x] = list[x];
	newlist[x] = new;
	free(list);
	return (newlist);
}
/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (num);
	while (*h != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (*h == list[x])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (num);
}
