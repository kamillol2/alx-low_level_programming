#include "main.h"
/**
 *string_toupper-changes all lowercase letters of a string to uppercase.
 *@str: the string to work on
 *
 *
 *Return: char
*/
char *string_toupper(char *str)
{
	int i, p;

	char H_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char L_case[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0 ; i <= strlen(str) - 1; i++)
	{
		for (p = 0; p <= 27; p++)
		{
			if (str[i] == L_case[p])
				str[i] = H_case[p];
		}
	}
	return (str);
}
