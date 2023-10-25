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
    print(4);
    return (0);
}