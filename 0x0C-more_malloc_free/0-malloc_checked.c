#include"main.h"
#include <stdlib.h>
#include <limits.h>
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}