#include<stdio.h>
#include <stdlib.h>
/**
 *main- do the prod of number arguments
 *@argc: counter of the number of arguments
 *@argv: array of strings
 *Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
