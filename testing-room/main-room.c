#include"main-test-room.h"
#include<stdio.h>
#include<string.h>
void print(int nb)
{
    printf("%d", nb);
    nb--;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    char str[] = {5,8,9,6,7};
    printf("%c\n",str[-1]);
    return (0);
}