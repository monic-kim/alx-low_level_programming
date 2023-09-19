#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a : array name
 * @n: is the number of arrays to be printed
 *Return : a and n imputs
 */
 void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n-1); i++);
	{
		printf("%d, ", a[i]);
	}
	if (i == (n-1))
	{
		printf("%d" , a[n-1]);
	}
	printf("\n");
}
	

