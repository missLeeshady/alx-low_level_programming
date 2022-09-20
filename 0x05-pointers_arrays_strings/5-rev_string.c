#include "main.h"

/**
* rev_string - function that reverses a string
* @s: string to be reversed
* Return: always s
*/
int _strlen(char *s);
void rev_string(char *s)
{
	int i, j = 0, temp;

	i = 0;
	j = (_strlen(s) - 1);

	while (i < j)
	{	temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
