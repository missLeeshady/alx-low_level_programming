#include <stdio.h>

/* main - entry point */
/* return: always  (success) */

int main()
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	/* print uppercase */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
