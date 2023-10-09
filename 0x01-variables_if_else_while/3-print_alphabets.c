#include<stdio.h>
/**
 *main-print alphabet twice
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
	for (lower_case = 'A'; lower_case <= 90; lower_case++)
		lower_case = putchar(lower_case);
	printf("\n");
	return (0);
}
