#include<stdio.h>
/**
 *main-series of two digits
 *
 *
 *
 *
 *Return: nada
 */
int main(void)
{
	int loop;

	int loop_in;

	for (loop = 48 ; loop < 58; loop++)
	{
		for (loop_in = loop + 1 ; loop_in < 58; loop_in++)
		{
			putchar(loop);
			putchar(loop_in);
			if (loop != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
