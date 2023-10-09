#include<stdio.h>
/**
 *main-print alpahbet except q and e
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
		if (lower_case == 'q' || lower_case == 'e')
			continue;
		else
			lower_case = putchar(lower_case);
	printf("\n");
	return (0);
}
