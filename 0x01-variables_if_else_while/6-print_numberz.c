#include <stdio.h>

/* main - entry point*/
/* return: always 0 (success) */
int main()
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');

	return (0);
}
