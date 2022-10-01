#include "main.h"

/**
* _memcpy - copies memory area
* @dest: the destination memory area
* @src: the source memory area whre the bytes are copied
* @n: bytes to be copied from memory area
*
* Return: a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = (char *)dest;
	char *psrc = (char *)src;

	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		pdest[i] = psrc[i];
	}
	return (dest);
}
