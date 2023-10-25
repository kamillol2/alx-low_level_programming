#include"main.h"
/**
 *_strspn
 *
 *
 *
*/
#include <stdio.h>

unsigned int max(unsigned int x, unsigned int y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

int in_string(char *str, char c)
{
    while (*str)
    {
	if (*str == c)
		return (1);
	str++;
	}
		return (0);
}
unsigned int _strspn(char *s, char *accept)
{
	int m = 0;

	int count = 0;

	while (*s)
	{
	if (in_string(accept, *s))
		count++;
	else
		count = 0;

	m = max(count, m);
	s++;
	}
	return (m);
}
