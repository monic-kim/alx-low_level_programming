#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the set of strings to be searched for
 * Return: a st is marched - a pointer to the matched byte.
 * if no set is marched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
