#include "main.h"
/**
  * string_toupper - changes all lowercase letters 
  * in srting to uppercase
  *@s: input string
  * Return: pointer to destination
  */

char *string_toupper(char *s)
{
	int counter = 0;
	while (*(s + counter) != '\0')
	{
		if ((*(s + counter) >= 97) && (*(s + counter) <= 122))
			*(s + counter) = *(s + counter) - 32;
		counter++;
	}
	return (s);
}
