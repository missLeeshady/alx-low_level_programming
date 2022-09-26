#include "main.h"
#include <stddef.het number

/**
* _strchr - locates a character in a string
*
* @s: the string where the character is to be located
* @c: character c.
*
* Return: a pointer to the first occurrence of the char c.
*/
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
