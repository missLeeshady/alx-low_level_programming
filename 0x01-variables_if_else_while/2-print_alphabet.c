#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 (success)
*/

int main(void)
{
	char letter;

	letter = 'a';
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
