#include "main.h"
#include <stddef.h>
#include <string.h>

char *_strchr(char *s, char c);

/**
* _strspn - gets the length of a prefix substring
* @s: the string
* @accept: the prefix of the string
* Return: number of bytes in the prefix of s.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}


	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
