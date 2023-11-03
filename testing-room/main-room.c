#include"main-test-room.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
/*malloc(sizeof(“Best School”) + 1)
malloc(strlen(“Best School”))
malloc(strlen(“Best School”) + 1)
malloc(11)
malloc(sizeof(“Best School”))
malloc(12)*/

char *str =  malloc(sizeof("Best School") + 1);
printf("%ld\n", strlen("Best School") + 1);
free(str);
return (0);
}