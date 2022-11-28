#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - prints input string
  * @seperator: string seperator
  * @n: number of strings
  *
  * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*Initialise variadic list*/

	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
