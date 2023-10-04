#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: nnumber of command line argument
 * @argv: array that contains the command line argument
 * Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
