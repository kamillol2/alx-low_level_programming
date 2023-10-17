#include"main.h"
/**
 *puts2-print every other elemnent of a string
 *@str: the string to print from
 *
 *
*/
void puts2(char *str)
{
	int size = strlen(str);

	int i;

	for (i = 0 ; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
