#include"main.h"
/**
 *_print_sign-determine the sign of value
 *@n: is the number given, has to be an int
 *
 *
 *Return: -1 neg 1 pos and 0 for 0
*/
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
