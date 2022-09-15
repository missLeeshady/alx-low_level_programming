#include "main.h"

/**
* print_most_numbers - it prints numbers 0 to 9, except 2 and 4
* void: the return value
* Return: always 0
*/
void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (i != '4' && i != '2')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
