#include "main.h"
#include <string.h>

/**
* rev_string - function that reverses a string
* @s: string to be reversed
* Return: always s
*/
void rev_string(char *s)
{
	int i, j = 0, temp;

	i = 0;
	j = (strlen(s) - 1);

	while (i < j)
	{	temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
