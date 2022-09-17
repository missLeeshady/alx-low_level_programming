#include <stdio.h>

/**
* main - the entry point
* void: return type
* Return: always 0
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
		continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
