#include <stdio.h>

/**
* main - the entry point
* void: return type
* Return: always (0)
*/
int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
