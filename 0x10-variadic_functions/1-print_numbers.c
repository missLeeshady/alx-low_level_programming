#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers, followed by \n
* @seperator: string to be printed between numbers
* @n: number of integers passed to the function
* Return: return void.
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int c;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	c = va_arg(ap, int);
	printf("%d", c);
	if (i < n - 1 && seperator)
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
