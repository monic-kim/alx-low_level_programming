#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _r - reallocates memory for ana array of pointers
 * @list: the old list
 * @size: size of new list
 * @new: new node
 *
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
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
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the first node.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < num; x++)
		{

			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}

