#include"main.h"
/**
 *rev_string-reverse a string and put it back into s
 *@s: the string to reverse and stock the new string
 *
 *
*/
void rev_string(char *s)
{
	int size = strlen(s) - 1;

	char new_s[size];

	int i;

	while (size >= 0)
	{
		new_s[i] = s[size];
		size--;
		i++;
	}
	new_s[strlen(s)] = '\0';
	strcpy(s, new_s);
}

