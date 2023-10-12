#include "main.h"
/**
* main - Entry point
*
* Description: This function prints the name "_putchar" to the standard output
* using the _putchar function from the main.h header file.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char name[] = "_putchar";

	int i;

	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
	_putchar('\n');
	return (0);
}
