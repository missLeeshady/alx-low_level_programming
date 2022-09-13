#include "main.h"

/**
* Main - print all alphabets 10 times
*
* Return value: always void.
*/
void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c );
	}
	_putchar('\n');
	}
}
