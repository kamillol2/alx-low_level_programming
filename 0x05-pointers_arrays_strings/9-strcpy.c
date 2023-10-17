#include"main.h"
/**
 *_strcpy- copies a string src in dest
 *@dest: the destination of the copied strin
 *@src: the string to be copied
 *Return: a pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int size = _strlen(dest);

	int i;

	for (i = 0; i <= size; i++)
		dest[i] = src[i];
	return (dest);
}
