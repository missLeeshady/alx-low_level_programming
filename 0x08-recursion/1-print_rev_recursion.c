#include "main.h"

/**
* _print_rev_recursion - print string in reverse
* @s: string that will be printed
* Return: return void always
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
