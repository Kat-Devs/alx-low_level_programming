#include <stdio.h>
#include <unistd.h>
/**
  * main - print message to stderr output
  *
  * Return:1
*/
int main(void)
{
	write(0, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
