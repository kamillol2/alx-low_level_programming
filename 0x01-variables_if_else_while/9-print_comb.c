#include<stdio.h>
/**
 *main-print a series of digits
 *
 *
 *
 *Return: nada
 */
int main(void)
{
	int loop;

	for (loop = 48 ; loop < 58; loop++)
	{
		loop = putchar(loop);
		if (loop != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
