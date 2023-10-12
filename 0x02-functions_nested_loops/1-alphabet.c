#include"main.h"
/**
*main-print alphabet
*
*
*Return: 0 on success
*/
void print_alphabet(void)
{
	char name[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
	_putchar('\n');
	return (0);
}
