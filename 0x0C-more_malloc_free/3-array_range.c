#include"main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: minimum vakue
 * @max: maximum value
 * Return: int pointer to the allowed memory
 */
int *array_range(int min, int max)
{
	int n, m;
	int *a;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	a = malloc(sizeof(int) * m);
	if (a == NULL)
		return (NULL);
	for (n = 0; n < m; n++)
	{
		a[n] = min;
		min++;
	}
	return (a);
}

