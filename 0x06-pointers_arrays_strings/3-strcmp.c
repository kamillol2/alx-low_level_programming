#include "main.h"
/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 * @s2: Secend string
 *
 * Return: 0 if s1 = s2, 0> if s1 > s2, 0< if s1 < s2.
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = strlen(s1);

	int len_s2 = strlen(s2);

	int val_s1 = 0;
	int val_s2 = 0;
	int i, p;

	for (i = 0 ; i < len_s1; i++)
	{
		val_s1 = val_s1 + (unsigned char) s1[i];
	}

	for (p = 0 ; p < len_s2; p++)
	{
		val_s2 = val_s2 + (unsigned char) s2[p];
	}
	if (val_s1 > val_s2)
		return (1);
	if (val_s1 < val_s2)
		return (-1);
	if (val_s1 == val_s2)
		return (0);
}
