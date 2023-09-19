#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a sting , followed by a new line, to stdout
 * @str: stirng to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
