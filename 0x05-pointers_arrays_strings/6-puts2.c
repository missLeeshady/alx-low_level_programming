#include "main.h"

/**
* puts - prints every other character in string,
* starting from the first character, then \n.
* 
* @str: string to be printed
*
* Return: Nothing.
*/
void puts2(char *str)
{
	char *str[10];
	int i = 0;

	for (i = 0; i < _strlen(*str); (i = i + 2))
	{
		_putchar(*str);
	}
	_putchar('\n');
}
