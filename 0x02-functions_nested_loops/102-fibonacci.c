#include <stdio.h>

/**
 * main - prints the first 50 numbers of
 * the Fibonacci sequence
 * Return: 0
 */

int main(void)
{
	int c;
	long int f1, f2, fn;

	f1 = 1;
	f2 = 2;
	printf("%ld, %ld", f1, f2);
	for (c = 0; c < 48; c++)
	{
		fn = f1 + f2;
		printf(", %ld", fn);
		f1 = f2;
		f2 = fn;
	}
	printf("\n");
	return (0);
}
