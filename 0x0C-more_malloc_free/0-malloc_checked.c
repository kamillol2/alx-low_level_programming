#include"main.h"
#include <stdlib.h>
#include<stdio.h>
/**
 *malloc_checked- allocates a dynamic space and checks if done
 *@b:space to allocate
 *
 *
 *Return: pointer to the new allocated space
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(b) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
