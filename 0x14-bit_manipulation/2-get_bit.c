#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: unsigned long int, the bit
* @index: unsigned int, starting from 0
* Return: the value of the bit at index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (n >> index);
	if (result & 1)
	return (1);
	else
	return (0);
	return (-1);
}
