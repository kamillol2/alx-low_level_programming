#include"main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array- creates an array of chars, and initializes
 *it with a specific char.
 *@size: the size of the array of chars
 *@c: the char to initialise the array
 *
 *Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int) size; i++)
		{
			*(str + i) = c;
		}
		return (str);
	}

}
