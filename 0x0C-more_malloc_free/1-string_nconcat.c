#include"main.h"
/**
 *string_nconcat-stitch 2 strings together
 *@s1:first string
 *@s2:second string
 *@n: number of char of s2 to stitch
 *
 *Return: a pointer to the new stitch string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	n = n > len2 ? len2 : n;

	str = malloc(sizeof(*str) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + n] = '\0';

	return (str);
}
