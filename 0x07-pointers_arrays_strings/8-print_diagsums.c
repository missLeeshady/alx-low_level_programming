#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print the sum of two diagonals of a square matrix
* of integers
*
* @a: an array pointed
* @size: size of matrix
*
* Return: an integer.
*/
void print_diagsums(int *a, int size)
{
	int i;

	int sums1, sums2;

	sums1 = 0;
	sums2 = 0;

	i = 0;
	while (i < size)
	{
		sums1 = sums1 + *(a + i * size + 1);
		sums2 = sums2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i,%i\n", sums1, sums2);
}
