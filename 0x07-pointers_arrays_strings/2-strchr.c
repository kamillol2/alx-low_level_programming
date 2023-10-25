#include"main.h"
/**
 *_strchr
 *
 *
 *
*/
char *_strchr(char *s, char c)
{
	int loop;

	while (s[loop] != '\0')
	{
		if (s[loop] == c)
		{
			return (s + loop);
		}
		loop++;
	}
	return (NULL);
}
