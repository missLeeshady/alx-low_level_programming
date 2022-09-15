#include "main.h"

/**
* _islower - checks for lowercase character
*
*@c: check if it is lowercase character
*
* Return value: always return an integer, successful
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{		
		return(0);
	}
}
