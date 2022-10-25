#include <stdio.h>
#include "main.h"

/**
  * print_array - prints n elements in array
  * @a: pointer to array
  * @n: array index
  * Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
