#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @seperator: string seperator
  * @n: number of integers passed to function
  *
  * Return: void
  */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int o;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(valist);
}
