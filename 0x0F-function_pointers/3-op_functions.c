#include "3-calc."

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 *  Return: sum of a nd b
 */
int op_add(int a, int b)
{
	return (a = b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a nd b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a:first number
 * @b: second number
 * Return: product of a and b
 */

int op_op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of numbers
 * @a: first number
 * @b: second  number
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

