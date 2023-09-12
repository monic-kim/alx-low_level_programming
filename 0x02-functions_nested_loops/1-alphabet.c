#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet Prints the alphabet in lower case
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
