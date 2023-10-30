#include <stdio.h>
#include <stdlib.h>
/**
 *main- calculates the number of change pieces you need
 *@argc: number of arguments
 *@argv: array of strings
 *Return: int of pieces of changes 0 if negative number 1 if too many arguments
*/
int main(int argc, char *argv[])
{
	int i, cents, total_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			total_coins++;
		}
	}

	printf("%d\n", total_coins);
	return (0);
}
