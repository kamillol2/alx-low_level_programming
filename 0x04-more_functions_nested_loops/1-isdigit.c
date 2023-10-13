#include "main.h"
/**
 *_isdigit-test a varibale to see if it's a digit
 * @c: the int to test
 *
 * Return: 1 on success else 0
*/
int _isdigit(int c)
{
	int list[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int i;

	for (i = 0; i <= 9; i++)
		if (c == list[i])
			return (1);
		if (c >= 48 && c <= 57)
			return (1);
	return (0);
}
