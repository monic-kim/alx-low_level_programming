#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform
 * the opration asked by the user
 * @s: thee operator passed aas argument
 * Return: a pointer to the function corresponding
 *to the operator given asa aparameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
}
