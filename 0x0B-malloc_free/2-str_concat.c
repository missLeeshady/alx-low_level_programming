#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - function that concatenates two strings, the ptr
* returned should poin to a newly allocated space in memory.
*
* @s1: first string
* @s2: the seconds string
*
* Return: NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;

	s3 = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s3 == NULL)
	{
	return ('\0');
	}
	return (NULL);
}
