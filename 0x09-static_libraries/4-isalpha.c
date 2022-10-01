#include "main.h"

/**
* _isalpha - it checks for alphabetic character
*
* @c: check if it is an alphabetic character
*
* Return value: always integer
*
* _isalpha:  checks for alphabetic character
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
