#include "main.h"
/**
 * _strchr - locates a charcter in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: if c is found - a pointer to the first oc=ucerence.
 * if c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
