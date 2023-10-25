#include"main.h"
/**
 *is_prime_number- checks if n is a prime number
 *@n: the number to check
 *
 *Return: 1 if its a prime number and 0 if it's not
*/

int is_prime_number(int n)
{
	return (checker(n, 1));
}
