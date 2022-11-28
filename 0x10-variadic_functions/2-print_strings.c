#include "variadic functions"
#include <stdio.h>

/**
  * print_strings - prints input string
  * @seperator: string seperator
  * @n: number of strings
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*Initialise variadic list*/

	va_list valist;
	unsigned int i;

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
