/**
 * _strncat-Concatenate two strings
 * @src: the string to be copied
 * @dest: the resulting string
 * @n: number of character to copy
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i,

	length = 0;

	for (i = 0; dest[i] != '\0'; i++)
		length++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];
	dest[length + i] = '\0';
	return (dest);
}
