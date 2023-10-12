#include "main.h"
/**
 *_islower-test a varibale to see if it's lower case
 * @c: the int to test
 *
 * Return: 1 on success else 0
*/
int _islower(int c)
{
	char name[] = "abcdefghijklmnopqrstuvwxyz";

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
