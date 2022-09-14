#include "main.h"

/**
* main function - entry point
*
* return type: int
*
* function _isalpha:  checks for alphabetic character.
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
