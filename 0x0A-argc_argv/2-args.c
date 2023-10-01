#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of comands line arg
 * @argv: array that contains a program command line argument
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
