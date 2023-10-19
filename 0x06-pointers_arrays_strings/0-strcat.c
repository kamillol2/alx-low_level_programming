#include "main.h"
/**
 *char *_strcat-concatenate src to dest and return a pointer to dest
 *@dest: destination of the concatination
 *@src:the string to concatinate
 *
 *Return: a char pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int len_src = strlen(src);

	int len_dest = strlen(dest);

	int i;

	for (i = len_dest; i <= (len_src + len_dest); i++)
		dest[i] = src[i];
	return (*dest);
}
