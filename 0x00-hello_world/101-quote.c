#include<stdio.h>
#include<string.h>
/**
 *main-printing on sterr without
 *printf or put
 *
 *Return: 1
 */
int main(void)
{
	char *line_to_print = "and that piece of art is useful"
				" -Dora Korpar, 2015-10-19\"";

	fwrite(line_to_print, sizeof(char), strlen(line_to_print), stderr);
	return (1);
}
