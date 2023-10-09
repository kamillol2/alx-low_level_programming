#include<stdio.h>
/**
 *main-print more chars
 *
 *
 *
 *
 *
 *
 *Return: nada
 */
int main(void)
{
	int loop;

	for (loop = 48; loop < 58; loop++)
		loop = putchar(loop);
	for (loop = 97; loop < 103; loop++)
		loop = putchar(loop);
	return (0);
}
