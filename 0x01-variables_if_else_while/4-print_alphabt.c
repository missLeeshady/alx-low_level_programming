#include <stdio.h>

/* main - entry point */
/* return: always 0 (successs) */

int main()
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
