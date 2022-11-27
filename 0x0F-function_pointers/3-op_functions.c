#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - adds two integers
  * @a: num 1
  * @b: num2
  *
  * Return: sum
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  * @a: num 1
  * @b: num2
  *
  * Return: differemce
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: num 1
  * @b: num2
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  * @a: num 1
  * @b: num2
  *
  * Return: division
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
  * op_mod - calculates remiander of integers
  * @a: num 1
  * @b: num2
  *
  * Return: remainder
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
