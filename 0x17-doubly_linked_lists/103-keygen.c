#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - generates passwords for crackme executable
 * @argc: argument count
 * @argv: array of pointers to the arguments
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), x, tmp;

	codex = "A-CHRDw871NS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3QarPhdKIouk";
	tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];
	tmp = 0;
	for (x = 0; x < len; x++)
		tmp += argv[1][x];
	password[1] = codex[(tmp ^ 79) & 63];
	tmp = 1;
	for (x = 0; x < len; x++)
		tmp *= argv[1][x];
	password[2] = codex[(tmp ^ 85) & 63];
	tmp = 0;
	for (x = 0; x < len; x++)
	{
		if (argv[1][x] > tmp)
			tmp = argv[1][x];
	}
	srand(tmp ^ 14);
	password[3] = codex[rand() & 63];
	tmp = 0;
	for (x = 0; x < len; x++)
		tmp += (argv[1][x] * argv[1][x]);
	password[4] = codex[(tmp ^ 239) & 63];
	for (x = 0; x < argv[1][0]; x++)
		tmp = rand();
	password[5] = codex[(tmp ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
