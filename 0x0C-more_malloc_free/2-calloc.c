#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory for an array of nmemb
*
* @nmemb: an array of elements
* @size: the size in bytes of elements of array.
*
* Return: a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
	return (NULL);
	memset(p, 0, (nmemb * size));
	return (p);
}
