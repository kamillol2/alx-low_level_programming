#include"main.h"
/**
 * 
 * 
 * 
 * 
*/
int main(void)
{
        char name[] = "abcdefghijklmnopqrstuvwxyz";

        int i;

        int j;

        for (j=0 ; j<= 9; j++)
        {
                for ( i = 0; name[i] !='\0'; i++)
                {
                _putchar(name[i]);
                }
                _putchar('\n');
        }
        return (0);
}