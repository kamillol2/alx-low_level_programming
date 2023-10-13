#include "main.h"
/**
 *_isupper-test a varibale to see if it's upper case
 * @c: the int to test
 *
 * Return: 1 on success else 0
*/
int _isupper(int c)
{
	char name[] = "AZERTYUIOPQSDFGHJKLMWXCVBN";

	int i = 0;

	for (i = 0; name[i] != '\0'; i++)
	{
		if (c == name[i])
		{
			return (1);

		}
	}
	return (0);
}
