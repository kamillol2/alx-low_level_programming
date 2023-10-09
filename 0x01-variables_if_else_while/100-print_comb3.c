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

	int loop_in;
	
	for (loop = 48 ; loop < 58; loop++)
	{
		for (loop_in = loop + 1 ; loop < 58; loop++)
		{	
			putchar(loop);
			putchar(loop_in);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
