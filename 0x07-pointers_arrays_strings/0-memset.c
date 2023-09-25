#include "main.h"
#include <stdio.h>
#include <sdlib>
/**
 * memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of tmes to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
