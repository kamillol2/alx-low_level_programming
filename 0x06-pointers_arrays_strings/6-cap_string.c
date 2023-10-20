#include "main.h"
/**
 *cap_string-capitalizes all words of a string.
 *@str: the string to work on
 *
 *
 *Return: char
*/
char *cap_string(char *str)
{
	int i, p;

	char H_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char L_case[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i <= strlen(str) - 1; i++)
	{
		if (i == 0)
		{
			for (p = 0; p <= 27; p++)
			{
				if (str[i] == L_case[p])
					str[i] = H_case[p];
			}
		}
		if (str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == '\t')
		{
			for (p = 0; p <= 27; p++)
			{
				if (str[i] == L_case[p])
					str[i] = H_case[p];
			}
		}
		else
		{
			continue;
		}
	}
	return (str);
}
