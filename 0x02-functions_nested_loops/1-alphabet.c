#include "main.h"

/**
  *print_alphabet - prints alphabet in lowercase followed by new line
  *
  *Return: 0
  */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
