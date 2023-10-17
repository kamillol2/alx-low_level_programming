#include "main.h"

/**
 * times_table - print times tables from 0 to n
 * @n: number of tables to print
 */
void times_table(int n)
{
	int prod, i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod < 10)
				{
					if (j == 0)
					{
						_putchar('0' + prod);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);
				}
				else
				{
					_putchar('0' + prod / 100);
					_putchar('0' + (prod - (100 * (prod / 100))) / 10);
					_putchar('0' + prod % 10);

				}
			}
			_putchar('\n');
		}
	}
}

