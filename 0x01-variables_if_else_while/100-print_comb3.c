#include <stdio.h>

/* main - entry point */
/* return value: always 0 (when successful) */

int main(void)
{
	int i;

	for (i = 1; i <= 89; i++)
	{
		putchar((i/10) - '0');
		if (i == 89)
		{continue;}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
