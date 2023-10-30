#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
/**
 *change_cal- does the math of change
 *@change: the number we need to divide up
 *
 *
 *Return: 0 on success
*/
int change_cal(int change)
{
	int ch_1 = 0;

	if (change == 1)
	{
		printf("1\n");
		return (0);
	}
	else
	{
		while (change != 0)
		{
			if (change % 25 == 0)
			{
				printf("%d\n", (change / 25) + ch_1);
				return (0);
			}
			else if (change % 10 == 0)
			{
				printf("%d\n", (change / 10) + ch_1);
				return (0);
			}
			else if (change % 5 == 0)
			{
				printf("%d\n", (change / 5) + ch_1);
				return (0);
			}
			else if (change % 2 == 0)
			{
				printf("%d\n", (change / 2) + ch_1);
				return (0);
			}
			else
			{
				change--;
				ch_1++;
			}
		}
	}
	return (1);
}

/**
 *main- calculates the number of change pieces you need
 *@argc: number of arguments
 *@argv: array of strings
 *Return: int of pieces of changes 0 if negative number 1 if too many arguments
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	result = change_cal(atoi(argv[1]));
	return (result);
}
