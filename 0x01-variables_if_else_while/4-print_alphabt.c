#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 (successs)
*/

int main(void)
{
char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
