#include"main.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
/**
 *str_concat- concatenates string s1 with s2
 *@s1:the first string
 *@s2:the second string
 *
 *Return: a pointer to the new concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int len_str, i, j = 0;

	char *copy_str;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	len_str = strlen(s1) + strlen(s2) + 1;
	copy_str = malloc(sizeof(char) * len_str);
	if (copy_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (int) (strlen(s1)); i++)
		{
			copy_str[i] = s1[i];
		}
		for (i = strlen(s1); i <= len_str; i++, j++)
		{
			copy_str[i] = s2[j];
		}
	}
	return (copy_str);
}
