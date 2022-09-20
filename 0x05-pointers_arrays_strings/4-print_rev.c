#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse,
* followed by '\n'.
* @s: is the string to be printed
* Return: Nothing
*/
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		printf("%c", *s);
	}
}
