#include "main.h"

/**
 * times_table - print times tables from 0 to 9
 */
void times_table(void)
{
    int prod, i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            prod = i * j;

            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (prod < 10)
            {
                _putchar(' ');
                _putchar('0' + prod);
            }
            else
            {
                _putchar('0' + prod / 10);
                _putchar('0' + prod % 10);
            }
        }
        _putchar('\n');
    }
}
