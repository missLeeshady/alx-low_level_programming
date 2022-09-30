#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point of arguments
* @argc: counter of arguments
* @argv: an array of size argc
* Return: always integer.
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
