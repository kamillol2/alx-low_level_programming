#include"main.h"
/**
 *swap_int- swap values of int pointers
 *@a: the first pointer
 *@b: the second pointer
 *
 *
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
