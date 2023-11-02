#include"main.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
/**
 *free_grid-free the space of a 2D array
 *@grid: pointer of the 2D array
 *@height: number of colomns
 *
 *Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
