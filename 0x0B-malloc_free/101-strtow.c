#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return:  a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}
	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);
	util(words, str);
	words[len] = NULL;
	return (words);
}
/**
 * util - fetches words into an array
 * @words: the strings array
 * @str: the string
 */
void util(char **words, char *str)
{
	int a, b, start, flag;

	a = b = flag = 0;
	while (str[a])
	{
		if (flag == 0 && str[a] != ' ')
		{
			start = a;
			flag = 1;
		}
		if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
		{
			create_word(words, str, start, a, b);
			b++;
			flag = 0;
		}
		a++;
	}
	if (flag == 1)
		create_word(words, str, start, a, b);
}
/**
 * create_word - create a word and insert it in an array
 * @words: the strings array
 * @str: string
 * @start: the string indent of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int a, b;

	a = end - start;
	words[index] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; start < end; start++, b++)
		words[index][b] = str[start];
	words[index][b] = '\0';
}
