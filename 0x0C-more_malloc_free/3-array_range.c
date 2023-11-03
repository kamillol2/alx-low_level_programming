#include"main.h"
/**
 *array_range-create an array and fill it with int from min to max
 *@min:starting point
 *@max:end point
 *
 *Return: pointer to the array
*/
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;

	return (arr);
}
