#include "main.h"
/**
 * _memcpy -  a function that copies @n bytes from  memory area.
 * to memory area @dest
 * @n:function copied
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
