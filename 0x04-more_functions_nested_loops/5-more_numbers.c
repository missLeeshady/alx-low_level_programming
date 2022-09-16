#include "main.h"

/**
* more_numbers - prints 1 to 14, 10 times
* void: return value
* Return: always void
*/
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	int num;


	for (num = '0'; num <= '9'; ++num)
	{
		_putchar(num);
	}
	_putchar('\n');
	}
}
