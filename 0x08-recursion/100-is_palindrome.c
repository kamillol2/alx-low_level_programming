#include "main.h"

/**
 * is_palindrome - Check if a string is palindrome or not.
 *
 * @s: String to check.
 *
 * Return: 1 if the string is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_rec(s) - 1));
}
