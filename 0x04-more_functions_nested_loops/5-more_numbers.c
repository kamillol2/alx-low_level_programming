#include"main.h"
/**
 *more_numbers-print int from 0 to 9
 *
 *
 *
*/

void more_numbers(void)
{
	int i;

	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
		}
	printf('\n');
	}
}
