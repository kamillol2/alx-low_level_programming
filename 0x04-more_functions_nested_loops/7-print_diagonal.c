#include"main.h"
/**
*print_diagonal-print out a \ after a number of ' '
*@size: the size of the diagonal
*
*/


void print_diagonal(int size)
{
	int i;

	int p;

	int N = size;

	for (i = size; i > 0; i--)
	{
		for (p = 0; p <= (size - N); p++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	N--;
	}
}
