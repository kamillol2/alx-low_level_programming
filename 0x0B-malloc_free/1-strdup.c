#include"main.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
/**
 *_strdup- create a copy of the string passed as arg
 *@str: the string to copy
 *
 *Return: pointer to the copy created
*/
char *_strdup(char *str)
{
	int len_str, i;

	char *copy_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len_str = strlen(str) + 1;
	copy_str = malloc(sizeof(char) * len_str);
	if (copy_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len_str; i++)
		{
			copy_str[i] = str[i];
		}
	}
	return (copy_str);
}
