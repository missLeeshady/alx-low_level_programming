#include "main.h"

/**
* _strncpy - the function copies a string
*
* @dest: it points the buffer
* @src: points at the string to be copied
* @n: size of string in bytes
* Return: dest to be returned
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
