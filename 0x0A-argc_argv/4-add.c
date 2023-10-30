#include<stdio.h>
#include <stdlib.h>
/**
 *main- do the sum of arguments
 *@argc: counter of the number of arguments
 *@argv: array of strings
 *Return: 0 on success
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	int i;

	if (atoi(argv[1]) == 0 || atoi(argv[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	int sum;

	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
