#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
	char *line_to_print =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(line_to_print, sizeof(char), strlen(line_to_print), stderr);
	return (1);
}

