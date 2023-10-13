#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	_putchar('\n');
	}
}


void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		return ('\n');
	}
	else
	{
	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
	}
}