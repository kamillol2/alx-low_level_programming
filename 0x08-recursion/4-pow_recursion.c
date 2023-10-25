#include"main.h"
/**
 *_pow_recursion- calculate x to the power of y
 *@x: the number to raise to the power to
 *@y: the power to raise to
 *
 *Return: an int corresponding to x**y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
