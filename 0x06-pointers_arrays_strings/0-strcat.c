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

	int p = 0;

	for (i = len_dest; i <= (len_src + len_dest); i++, p++)
		dest[i] = src[p];

	return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}