#include "main.h"
#include <stdio.h>
/**
 * _memset - a function that fills a block
 * of memory with values
 * @n:no of bytes to be changed
 * @b: the value
 * @s:address of memory to be filled
 * Return: change array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
