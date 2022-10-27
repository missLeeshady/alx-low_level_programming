#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: head of the node
* Return: number of elements in the linked list list_t
*/
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	h = h->next;
	num++;
	}
	return (num);
}
