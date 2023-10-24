#include "lists.h"
/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: double pointer
 *
 * Return: address of the node where loops starts
 * or NULL IF NO LOOP
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	t = h = head;
	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
		{
			t = head;
			break;
		}
	}
	if (!t || !h || !h->next)
		return (NULL);
	while (t != h)
	{
		t = t->next;
		h = h->next;
	}
	return (h);
}
