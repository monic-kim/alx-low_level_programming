#include "main.h"
#include <stdio.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @old_size: size, in bytes, of the allocated space for ptr
 * @ptr: former pointer tot the old  memory allocaed
 * by malloc
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer tot the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t x, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; x++)
		p[x] = oldp[x];
	free(ptr);
	return (p);
}
