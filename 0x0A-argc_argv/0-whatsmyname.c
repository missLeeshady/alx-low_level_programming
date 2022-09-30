#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point of arguments
* @argc: counter of argument
* @argv: an array of size argc
* Return: always integer
*/
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
