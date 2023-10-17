#include"main.h"
/**
 *puts_half- print out the second half of a string
 *@str: the string to work on
 *
 *
*/
void puts_half(char *str)
{
	int size = strlen(str);

	int i;

	if (size / 2 == 0)
	{
		for (i = (size + 1) / 2; i <= size; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = size / 2; i <= size; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
