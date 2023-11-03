#include"main.h"
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
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
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int full = len_s1 + len_s2 + 1;
	int i;
	int j = 0;
	char *ptr;

	if ((int) n < len_s2)
	{
		len_s2 = n;
	}
	ptr = calloc(full, sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		*(ptr + i) = s1[i];
	}
	for (i = len_s1; i <= len_s1 + len_s2 ; i++, j++)
	{
		*(ptr + i) = s2[j];
	}
	return (ptr);
}
