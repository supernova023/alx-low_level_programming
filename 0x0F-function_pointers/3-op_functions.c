#include "3-calc.h"
/**
 * op_add - add num 1 and num 2
 *
 * @a: num 1
 * @b: num 2
 * Return: int result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract num 2 from num 1
 *
 * @a: num 1
 * @b: num 2
 * Return: int result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply num 1 by num 2
 *
 * @a: num 1
 * @b: num 2
 * Return: int result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide num 1 by num 2
 *
 * @a: num 1
 * @b: num 2
 * Return: int result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - find remainder after dividing num 1 by num 2
 *
 * @a: num 1
 * @b: num 2
 * Return: int result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
