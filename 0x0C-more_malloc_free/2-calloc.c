#include"main.h"
/**
 *_calloc-does the same thing as calloc with malloc
 *@nmemb: number of cases
 *@size: the size of each case
 *
 *Return: pointer to the space allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
