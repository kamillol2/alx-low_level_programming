#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include<string.h>
/**
 * checker - Check if n is a prime number
 *
 * @n: Number to check
 * @i: Number used to check
 *
 * Return: 0 if not prime and 1 if a prime number
 */

int _putchar(char c);
int checker(int n, int i)
{
	if (n < 0 || n == 1)
		return (0);
	if (n % i == 0 && (i != n && i != 1))
		return (0);
	else if (i == n)
		return (1);
	return (checker(n, i + 1));
}
/**
 * check_sqrt - Check if i is the natural square of n.
 *
 * @n: Number searching for it square
 * @i: Number to check if it is the square number
 *
 * Return: -1 if n < 0 or the natural square does not exicst, i if it it the
 *         natural square
 */
int check_sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check_sqrt(n, i + 1));
}
/**
 * check_palindrome - check if a string is palindrome.
 *
 * @s: String to check.
 * @start: Index to start from.
 * @end: Index to end at.
 *
 * Return: 1 if palindrome 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_rec - Calculate the length of a string, using recursion
 *
 * @s: String to calculate it length
 *
 * Return: Length of the string s
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_rec(s + 1));
}
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
#endif /*MAIN_H*/
