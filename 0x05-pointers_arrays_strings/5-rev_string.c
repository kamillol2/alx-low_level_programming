#include"main.h"
/**
 *rev_string-reverse a string and put it back into s
 *@s: the string to reverse and stock the new string
 *
 *
*/
void rev_string(char *s)
{
	int size = strlen(s);

	int i = 0;

	while (size > 0)
	{
		s[i] = s[size - 1];
		size--;
		i++;
	}
}

