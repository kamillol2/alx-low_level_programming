#include"main.h"
/**
*print_triangle-print out a triangle using #
*@size: the size of the triangle
*
*/


void print_triangle(int size)
{
	int i;

	int j;

	int p;

	int N = size;

	for (i = size; i > 0; i--)
	{

		for (j = 0; j < N; j++)
		{
			_putchar(' ');
		}
		for (p = 0; p <= (size - N); p++)
		{
			_putchar('#');
		}
	_putchar('\n');
	N--;
	}
}
