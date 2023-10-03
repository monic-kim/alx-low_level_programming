#include "main.h"
/**
 * str_concat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer o the conc... string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, c, d;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (c = 0; c < len1; c++)
	{
		ptr[c] = s1[c];
	}

	for (d = 0; d <= len2; d++)
	{
		ptr[c] = s2[d];
		c++;
	}
	return (ptr);
}



