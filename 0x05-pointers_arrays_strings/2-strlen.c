#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string to be printed
* Return: the number of bytes in the string
*/
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
