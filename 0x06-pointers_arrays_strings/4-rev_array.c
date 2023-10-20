#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *
 *@a: array to reverse
 *@n: number of element in a
 *
 *
*/
void reverse_array(int *a, int n)
{
	int i, temp_record;

	for (i = 0; i <= n; i++, n--)
	{
		temp_record = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp_record;
	}
}
