#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets in reverse
 * return: Always 0(SUCCESS)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
