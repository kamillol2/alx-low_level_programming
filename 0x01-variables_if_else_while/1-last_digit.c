#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main-print last digit and describe
 *
 *
 *Return: nada
 */
int main(void)
{
	int n;

	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	if (last_n > 5)
		printf("last digit of %d is %d and is greater than 5", n, last_n);
	else if (last_n < 6 && last_n != 0)
		printf("last digit of %d is %d and is less that 6 and not 0", n, last_n);
	else if (last_n == 0)
		printf("last digit of %d is %d and is 0", n, last_n);
	return (0);
}
