#include"main.h"
#include<stdio.h>
/**
 *print_to_98- print integers from n to 98
 *@n: the integer starting point
 *
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("%d\n", n);
				n--;

			}
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n++;
			}
			else
			{
				printf("%d\n", n);
				n++;
			}
		}
	}
}
