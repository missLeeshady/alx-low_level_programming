#include "main.h"

/**
* _islower - checks for lowercase character
*
*@c: check if it is lowercase character
*
* Return: always return an integer
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
	return (0);
	}
}
