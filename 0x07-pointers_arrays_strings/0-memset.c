#include "main.h"

/**
* _memset - fills the memory with a  constant byte
*
* @s: memory area pointer
* @b: constant byte
* @n: first bytes of memory area
*
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char)b;
	}
	return (s);
}
