#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[d] %s\n", h->len, h->str);
		i++;
		h = h->nest;
	}
	return (i);
}
