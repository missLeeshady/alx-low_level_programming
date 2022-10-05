#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
*
* @width: an integer, width of grid
* @height: an integer height of grid
*
* Return: NULL on failure, and when integers entered are 0 or -ve.
*/
int **alloc_grid(int width, int height)
{
	int i;

	int **alloc = (int **)malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
	{
	alloc[i] = (int *)malloc(sizeof(int) * height);
	}
	if (width || height <= 0)
	{
	return (NULL);
	}
	return (NULL);
}
