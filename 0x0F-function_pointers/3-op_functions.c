#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that sums two numbers.
 * @a: This is the variable of the  first number.
 * @b: This is the variable of the second number.
 * Return: This returns sum of a&b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - function that returns difference of two numbers.
 * @a: This is the variable of first number.
 * @b: This is the variable of  second number.
 *
 * Return:  difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Function that multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
