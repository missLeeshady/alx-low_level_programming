#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @*str: pointer character variable to be reversed
* Return: uppercase characters of inputted string
*/
char *string_toupper(char *str)
{
	for (; *str; str++)
	{
	if (*str >= 97 && *str <= 122)
	{	
		*str = *str - 32;
	}
	}

	return(str);
}
