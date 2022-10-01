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
	char *ptr;

	ptr = haystack;

	while (*ptr)
	{
	if (strncmp(ptr, needle, strlen(needle)) == 0)
	{
		return (ptr);
	}
	ptr++;
	}
	return (NULL);
}
