#include"main.h"
/**
 *factorial- calculate the factorial of n
 *@n: the factorial to calculate
 *
 *Return: n!
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n != 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
