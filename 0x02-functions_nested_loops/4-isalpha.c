#include "main.h"
/**
*_isalpha-test to see if the int corresponds to a char ascii
*@c: the int to test
*
*Return: 1 on success 0 else
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
