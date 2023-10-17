#include"main.h"
/**
 *_strlen- calculate the size of a string
 *@s: the string to calculate the size
 *
 *Return: an int value called loop
*/
int _strlen(char *s)
{
	int loop;

	while (s[loop] != '\0')
	{
		loop++;
	}
	return (loop);
}
