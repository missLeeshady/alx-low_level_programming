#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings,followed by /n
* @seperator: the string to be printed between the strings
* @n: counter of the strings passed to the function
* Return: return always void.
*/
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	ch = va_arg(ap, char *);
	if (ch)
	printf("%s", ch);
	else
	printf("(nil)");
	if (i < n - 1 && seperator)
	printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
