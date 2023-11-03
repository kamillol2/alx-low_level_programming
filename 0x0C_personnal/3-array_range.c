#include"main.h"
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 *array_range-create an array and fill it with int from min to max
 *@min:starting point
 *@max:end point
 *
 *Return: pointer to the array
*/
int *array_range(int min, int max)
{
	int size = max - min + 1, i;

	int *ptr = malloc(sizeof(size) * size);

	for (i = 0; i <= max; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
