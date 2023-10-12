#include"main.h"
/**
 * times_table-print time tables from 0 to 9
 *
 *
 *
 *
*/
void times_table(void)
{
	int prod, j, i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod >= 10)
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			else
			{
				_putchar(prod / 10);
				_putchar('0' + (prod % 10));
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}


}
