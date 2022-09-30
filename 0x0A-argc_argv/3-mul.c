#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point of arguments
* @argc: counter of arguments
* @argv: an array of size argc
* Return: 0 if successful, else error and return 1.
*/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
	}
	printf("Error\n");
	return (1);
}
