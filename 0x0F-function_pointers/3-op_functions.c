#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 *op_add - adds integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: sum of integer 1 and integer 2
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: subtraction of integer 1 and integer 2
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: multiplication of integer 1 and integer 2
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: division integer 1 and integer 2
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - finds modulus of integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: integer 1 modulo integer 2
 */

int op_mod(int a, int b)
{
	return (a % b);
}
