#include<stdio.h>
/**
 *main-print chars
 *
 *
 *
 *
 *Return: nada
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'z'; lower_case >= 97; lower_case--)
		lower_case = putchar(lower_case);
	putchar('\n');
	return (0);
}
