#include <stdio.h>

/* main - entry point */
/* return: always 0 (successs) */

int main()
{
	char letter;

	for (letter = 'a'; (letter != 'e') & (letter != 'q') & (letter <= 'z'); letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
