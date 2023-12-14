#include "main.h"
/**
 * _puts - function that prints a string to stdout
 * @str: string
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
