#include"main.h"
/**
 *print_array- print an 'n' number of ints
 *@a: the array to print from
 *@n: the number of ints to print
 *
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf('\n');
}
