#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strpbrk - searches a string for any of a set of bytes
*
* @s: string to be searched
* @accept: string that will be used to search in s
*
* Return: a pointer to the byte in s that
* matches one of the bytes in accept or NULL
* if no byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
		s++;
		}
	}
	return (NULL);
}
