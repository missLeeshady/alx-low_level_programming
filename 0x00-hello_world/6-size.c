#include <stdio.h>

/**
* main - entry point of program
*
* return: always void, 0 (success)
*/

int main(void)
{
	char chartype;
	int intype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of a char: %lu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %lu byte(s)\n", sizeof(intype));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %lu byte(s)\n", sizeof(floattype));

	return (0);
}
