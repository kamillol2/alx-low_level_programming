#include<stdio.h>
/**
 *main-pritn out 3 digits
 *
 *
 *
 *Return: nada
 *
 */
int main(void)
{
	int loop;

	int loop_in;

	int loop_in3;

	for (loop = 48; loop < 58; loop++)
	{
		for (loop_in = loop + 1; loop_in < 58; loop_in++)
		{
			for (loop_in3 = loop_in + 1 ; loop_in3 < 58; loop_in3++)
			{
				putchar(loop);
				putchar(loop_in);
				putchar(loop_in3);
				if (loop != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

