#include<stdio.h>
/**
 *main- print the number of arguments passed
 *@argc: counter of the number of arguments
 *@argv: array of strings
 *Return: 0 on success
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
