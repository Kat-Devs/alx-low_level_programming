#include "main.h"

/**
  *print_alphabet - prints alphabet in lowercase followed by new line
  *
  */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}