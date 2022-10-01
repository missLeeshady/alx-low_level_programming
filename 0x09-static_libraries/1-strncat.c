#include "main.h"

/**
* _strncat - concatenates two strings
*
* @dest: string where resulting pointer is returned.
* @src: string to be concatenated
* @n: the number of bytes in src.
*
* Return: Always dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
