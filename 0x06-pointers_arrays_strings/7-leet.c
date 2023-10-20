#include "main.h"
/**
 *leet- encodes a string into 1337.
 *@str: the string to work on
 *
 *
 *Return: char
*/
char *leet(char *str)
{
		int i, p;

	char H_case[] = "AaEeOoTtLl";

	char L_case[] = "4433007711";

	for (i = 0 ; i <= strlen(str) - 1; i++)
	{
		for (p = 0; p <= 10; p++)
		{
			if (str[i] == H_case[p])
				str[i] = L_case[p];
		}
	}
	return (str);
}
