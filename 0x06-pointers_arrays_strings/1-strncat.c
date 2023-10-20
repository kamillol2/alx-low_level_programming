#include "main.h"
/**
 *char *_strncat-concatenate n char from src to dest
 *@dest:receiver of n char from src
 *@src: sender of n char to dest
 *@n: number of char to concatenate
 *Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int len_src = strlen(src);

	int len_dest = strlen(dest);

	if (n > len_dest)
		n = len_src;

	int i;

	int p = 0;

	for (i = len_dest; i < (n + len_dest); i++, p++)
		dest[i] = src[p];
	return (dest);
}
