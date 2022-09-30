#include <stdio.h>

/**
* main - entry point of arguments
* @argc: counter of arguments
* @argv: an array of size argc
* Return: always an integer.
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	}
	return (0);
}
