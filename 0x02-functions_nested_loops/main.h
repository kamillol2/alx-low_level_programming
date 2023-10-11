#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


int _islower(int c)
{
        char name[] = "abcdefghijklmnopqrstuvwxyz";
        
        int i = 0 ;
        
        for ( i = 0; name[i] !='\0'; i++){
                if(c == name[i])
                {
                        return(1);
                }
        }
        return(0);
}

int _isalpha(int c)
{             
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
                return (1);
        }
        return(0);
}