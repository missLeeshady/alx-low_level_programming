#include "main.h"

/**
* print_rev - prints a string in reverse,
* followed by '\n'.
* @s: is the string to be printed
* Return: a string
*/
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
