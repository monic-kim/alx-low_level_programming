#include "lists.h"
#include<stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: hed of node
 * @str: stirng to storee
 * Return: address of new element or Null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int x, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
