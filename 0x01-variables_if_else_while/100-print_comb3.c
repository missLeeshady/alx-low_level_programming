#include <stdio.h>

/* main - entry point */
/* return value: always 0 (when successful) */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar('0'+i);
		if (i == '9')
		{continue;}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
