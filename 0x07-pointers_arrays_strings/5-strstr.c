#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* _strstr - locates a substring
* @haystack: the string where th locating is carried out
* @needle: the substring to be located
* Return: a pointer to the beginning of the located substring,
* or NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	if (*haystack == *needle)
	{
		return (haystack);
	}
	haystack++;
	}
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			return (0);
		}
		haystack++;
		needle++;
	}
	return (NULL);
}
