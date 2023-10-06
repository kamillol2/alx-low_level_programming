#include<stdio.h>
/**
 *main- print size of variable
 *Return: 0 on success
 *
 *
 */
int main(void)
{
	long int a;
	printf("Size of a char: 1 byte(s)\n"
	"Size of an int: 4 byte(s)\n"
	"Size of a long int: 4 byte(s)\n"
	"Size of a long long int: %ld byte(s)\n"
	"Size of a float: 4 byte(s)\n",sizeof(a));
	return (0);
}
