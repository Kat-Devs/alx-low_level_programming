#include "lists.h"

/**
  * print_list - prints elements in lit_t
  * @h: singly linked list
  * Return: element count of list
  */

size_t print_list(const list_t *h)
{
	size_t element;

	element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		element++;
	}

	return(element);
}
