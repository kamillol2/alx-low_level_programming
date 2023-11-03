#include"main.h"
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 *_calloc-does the same thing as calloc with malloc
 *@nmemb: number of cases
 *@size: the size of each case
 *
 *Return: pointer to the space allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (int) size; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
