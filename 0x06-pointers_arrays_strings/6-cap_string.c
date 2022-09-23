#include "main.h"
#include <stdio.h>
#define MAX 100

/**
* cap_string - capitalizes all the words n a string
* @str: string that will be capitalized
* Return: string
*/
int main(void)
{
	char str[MAX] = {0};	
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if(i==0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{	
			str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == ' ')
		{
			++i;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		else
		{
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}

return (0);
}
