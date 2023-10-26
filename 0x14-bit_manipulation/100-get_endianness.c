#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: of if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int m;
	char *x;

	m = 1;
	x = (char *) &m;
	return (*x);
}
