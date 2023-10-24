#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: a double ointer
 * Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
