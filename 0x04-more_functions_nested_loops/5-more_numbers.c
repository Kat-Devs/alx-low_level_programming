#include "main.h"

/**
  * more_numbers - prints the numbers 0 to 14 10x over
  *Return: void
  */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((ch / 10) + 48);
			_putchar ((ch % 10) + 48);
		}
		_putchar ('\n');
	}
			
}
