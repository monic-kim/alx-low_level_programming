#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prins the result of simple operations
 * @argc: the no of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: always 0
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if ((*oop == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
