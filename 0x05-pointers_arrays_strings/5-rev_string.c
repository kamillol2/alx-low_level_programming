#include "main.h"
/**
 * rev_string - reverse a string and store it back in s
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int size = strlen(s);
	int i;
	char temp;

	for (i = 0; i < size / 2; i++)
	{
		temp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = temp;
	}
}
