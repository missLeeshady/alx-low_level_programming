#include "main.h"

/**
* _strcat - concatenates two strings
* 
* @dest: where the appended src string is returned
* @src:the string to be appended
* 
* Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{	
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
