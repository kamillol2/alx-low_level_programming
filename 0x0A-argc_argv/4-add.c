#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *str_test- test a string if only has digits
 *@str: pointer to string
 *
 *
 *Return: 0 only digit and 1 if non digit found
*/
int str_test(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (isdigit(str[i]) == 1)
		{
			return (1);/*Not digit found*/
		}
	}
	return (0);/*Only digits*/
}

/**
 *main- do the sum of arguments
 *@argc: counter of the number of arguments
 *@argv: array of strings
 *Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (str_test(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
