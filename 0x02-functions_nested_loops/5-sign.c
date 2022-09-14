#include "main.h"

/**
* main - entry point of program
*
* Return value: int 
*
* function print_sign: prints the sign of a number
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);

	}
	else
	{
	if ((n = 0))
	{
		_putchar('0');
		return  (0);
	}
	else
	{
	while (n > 0)
	{
		
		_putchar('-');
		return (-1);
	}
	}
	}
	return (0);
}
