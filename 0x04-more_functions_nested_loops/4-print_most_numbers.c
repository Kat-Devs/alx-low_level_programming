#include "main.h"

/**
  * print_most_numbers - prints numbers 0 t0 9 except for 2 and 4
  * Return: void
  */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num);
	}
	_putchar('\n');
}
