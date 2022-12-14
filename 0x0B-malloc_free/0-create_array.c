#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - creates an array of characters,
* and initializes it with a specific char.
* @size: an unsigned int
* @c: a character
* Return: NULL if size is 0,
* returns a pointer to an array or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	s[i] = '\0';
	return (s);
}
