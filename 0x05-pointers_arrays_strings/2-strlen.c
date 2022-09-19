#include "main.h"

/**
* _strlen - returns the length of a string
* @char: characters in string to be returned
* Return: the number of bytes in the string
*/
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
