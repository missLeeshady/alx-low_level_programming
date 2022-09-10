#include <stdio.h>

/* main - entry point */
/* return: always 0 (success) */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(',');
	putchar('\n');

	return (0);
}
