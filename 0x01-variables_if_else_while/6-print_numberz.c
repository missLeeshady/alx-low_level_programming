#include <stdio.h>

/**
* main - the entry point
* void: return type
* Return: always 0 (success)
*/
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');

	return (0);
}
