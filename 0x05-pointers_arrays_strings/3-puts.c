#include"main.h"
/**
 *_puts- print out a string
 *@str: the string to print
 *
 *
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
	_putchar('\n');
}
