#include"main.h"
/**
 *_memcpy
 *
 *
 *
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
	{
		dest[loop] = src[loop];
	}
	return (dest);
}
