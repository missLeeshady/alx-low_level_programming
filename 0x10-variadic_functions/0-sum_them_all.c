#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: constant unsigned integer
* Return: the sum of its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, c;

	va_start(ap, n);
	if (n == 0)
	return (0);

	c = 0;
	for (i = 0; i < n; i++)
	{
	c += va_arg(ap, int);
	}
	va_end(ap);
	return (c);
}
