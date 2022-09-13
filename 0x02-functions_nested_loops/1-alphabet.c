#include "main.h"

/**
* main - prints all lowercase alphabets
*
* Return: always void, successful.
*/

void print_alphabet(void)
{
	char letter;
	
	letter = 'a';
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
