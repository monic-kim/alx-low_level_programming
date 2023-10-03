#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
		int x, y, z = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
	}
	len += ac;
	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			aout[z] = av[x][y];
			z++;
		}
		if (aout[z] == '\0')
		{
			aout[z++] = '\n';
		}
	}
	return (aout);
}
