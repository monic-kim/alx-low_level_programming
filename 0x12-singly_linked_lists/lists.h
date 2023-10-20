#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: (malloc) strng
 * @len: length of th string
 * @next:  points to the next node
 *
 * Description: singly linked list node structure
 */
typendef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
