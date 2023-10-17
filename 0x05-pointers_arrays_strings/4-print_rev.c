#include"main.h"
/**
 *print_rev- print the reverse of a string s
 *@s: the string to reverse and print out
 *
*/
void print_rev(char *s)
{
	int size = _strlen(s) - 1;

	while (size >= 0)
	{
		write(1, (s + size), 1);
		size--;
	}
	_putchar('\n');

}
