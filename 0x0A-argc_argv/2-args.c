#include<stdio.h>
/**
 *main- print a list of the arguments
 *@argc: counter of the number of arguments
 *@argv: array of strings
 *Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
