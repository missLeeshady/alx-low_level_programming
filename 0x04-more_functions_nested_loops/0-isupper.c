#include "main.h"

/**
* _isupper - checks for uppercase letter
* @c: integer to be returned
* Return: always integer c
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
