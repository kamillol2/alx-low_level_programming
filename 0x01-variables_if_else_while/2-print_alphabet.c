#include<stdio.h>
/**
 *main-print alphabet
 *
 *
 *
 *
 *Return: nada
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 122; lower_case++)
		lower_case = putchar(lower_case);
	printf("\n");
	return (0);
}
