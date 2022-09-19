#include "main.h"

/**
* _puts - function that prints a string, followed by 
* a new line.
* @str: the string to be printed
* Return: return a nonnegative number on success, 
* or EOF on error.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
