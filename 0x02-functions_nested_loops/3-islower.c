#include "main.h"
/**
 * 
 * 
 * 
 * 
*/
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