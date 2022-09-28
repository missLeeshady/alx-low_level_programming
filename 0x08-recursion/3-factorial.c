#include "main.h"

/**
* factorial - returns a factorial of a given number
* @n: the integer whose factorial is to be solved
* Return: returns integer
*/
int factorial(int n)
{
	if (n <= 1)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
