#include "main.h"

/**
* _isdigit - checks for a digit
* @c: integer to be returned
* Return: always integer c
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
