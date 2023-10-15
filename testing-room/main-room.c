#include"main-test-room.h"
#include<stdio.h>
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
	if (size == 0)
		_putchar('\n');
}


void print_diagonal(int size)
{
	int i;

	int j;

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

int main(void)
{
    print_diagonal(10);
    return (0);
}
