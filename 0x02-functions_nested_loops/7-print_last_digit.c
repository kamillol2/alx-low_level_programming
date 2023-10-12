#include "main.h"
/**
 *print_last_digit-return the last digit of an int
 *@a: the int to extract digit from
 *
 *
 *Return: last_a which is the last digit
*/
int print_last_digit(int a)
{
	int last_a;

	if (a >= 0)
	{
		last_a = a % 10;
	}
	else
	{
		if (a == -2147483648)
		{
			_putchar('0' + 8);
			return (8);

		}
		else
		{
			last_a = -a % 10;
		}
	}
	_putchar('0' + last_a);
	return (last_a);

}
