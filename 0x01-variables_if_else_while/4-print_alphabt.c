#include <stdio.h>

/* main - entry point */
/* return: always 0 (successs) */

int main()
{
	char letter;

	for (letter = 'a'; (letter <= 'z') & (letter != 'q'); letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
