#include"main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *alloc_grid-create a 2D array
 *@width: number of lines
 *@height: number of colomns
 *
 *Return: a pointer to a pointer
*/
int **alloc_grid(int width, int height)
{
	int **line_dim = (int **) malloc((sizeof(int *) * height));
	int i, j;

	if (*line_dim == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(line_dim + i) = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			line_dim[i][j] = 0;
		}
	}
	return (line_dim);
}
