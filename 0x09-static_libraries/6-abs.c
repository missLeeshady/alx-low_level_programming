#include "main.h"

/**
 * _abs - computes the absolute value of a given number
 * @n: integer to be computed
 * Return: absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	if (n >= 0)
		n = n;
	return (n);
}
