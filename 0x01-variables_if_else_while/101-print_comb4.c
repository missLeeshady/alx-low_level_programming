#include <stdio.h>

/* main - entry point */
/* return value: always 0 (successful) */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		{
			putchar (i);
			if (i == '9')
			{
			continue;
			}
			putchar('0');
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);

}
