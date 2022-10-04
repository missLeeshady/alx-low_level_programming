#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string that is duplicated
* Return: NULL if str is NULL, on success returns a ptr to the duplicated
* string. returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	int str_size;
	static char *dup;
	char *dup_offset;

	str_size = strlen(str);
	dup = (char *) malloc(sizeof(char) * str_size + 1);
	if (dup == NULL)
	{
	return ((char *) NULL);
	}
	dup_offset = dup;
	while (*str)
	{
	*dup_offset = *str;
	dup_offset++;
	str++;
	}
	*dup_offset = '\0';
	return (dup);
}
