#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 *
 * @n: Number to calculate it natural square.
 *
 * Return: Natural square of n, or -1 if n does not have a natural square.
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(n, 1));
}
