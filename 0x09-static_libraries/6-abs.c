#include "main.h"

/**
 * _abs - compute the absolute value of a given number
 * @i: integer to compute absolute number
 *
 * Return: absolute value of the input number.
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	if (n >= 0)
		n = n;
	return (n);
}
