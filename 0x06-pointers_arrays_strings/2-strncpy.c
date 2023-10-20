#include "main.h"
/**
 *char *_strncpy-copies a string
 *@dest: receiver of copy
 *@src: string to copy
 *@n: number of char to copy
 *Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
