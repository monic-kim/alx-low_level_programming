#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: the string to be searched
 * @needle: the string to be locted
 * Return: if the substring is located - a pointer to the beginning o
 *                                        of the located substring
 * if the substrung is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
