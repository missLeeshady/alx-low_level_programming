#include "main.h"

/**
* swap_int - switch two pointed variables
*
* @a: first integer
* @b: second integer
*
* Return: pointed integer
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *a;
	*a = *b;
	*b = temp;
}
