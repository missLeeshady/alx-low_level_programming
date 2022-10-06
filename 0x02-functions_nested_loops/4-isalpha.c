#include "main.h"

/**
* _isalpha - it checks for alphabetic character
*
* @c: an alphabetic character
*
* Return: always integer
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
