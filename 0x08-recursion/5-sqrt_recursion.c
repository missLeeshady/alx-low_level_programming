#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the integer whose square root is to be found
* Return: returns an integer
*/
int _sqrt_recursion(int n)
{
	int i = 1;
	int res = 1;

	if (n == 0 || n == 1)
	{
	return (n);
	}
	while (res <= n)
	{
	i++;
	res = i * i;
	}
	return (i - 1);

	printf("%d\n", _sqrt_recursion(n));
	return (0);
}
