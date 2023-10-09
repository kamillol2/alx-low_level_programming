#include<stdio.h>
/**
 *main-series of two digits
 *
 *
 *
 *
 *
 */
int main(void)
{
	int loop;

	for (loop = 48 ; loop < 58; loop++)
	{
		loop = putchar(loop);
		putchar(44);
		putchar(32);
		for (loop = 48 ; loop < 58; loop++)
		{
			loop = putchar(loop);
		}
	}
	putchar('\n');
	return (0);
}
