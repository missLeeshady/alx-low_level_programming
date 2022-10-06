#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - creates an array of integers
* @min: minimum integers in the array
* @max: maximum integers in the array
* Return: the pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
	return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
	return (0);
	while (i <= max - min)
	{
		arr[i++] = t++;
	}
	return (arr);
}
