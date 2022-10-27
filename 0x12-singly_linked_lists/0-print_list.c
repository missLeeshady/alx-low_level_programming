#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all elements of a list
* list_t: singly linked list
* *h: head of list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[%d] %s\n", 0, "(nil)");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);
}
